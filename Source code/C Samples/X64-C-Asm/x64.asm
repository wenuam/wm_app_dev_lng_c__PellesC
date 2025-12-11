option cstrings : on                    ; accept C escape sequences, like \n

cstr macro stxt:req
    ; place null-terminated string in .const
    local slab
    .const
slab db stxt, 0
    ; back to .code
    .code
    exitm <offset slab>
    endm

; assembly version of MyStruct (4 byte alignment)
MyStruct struct 4
    a sdword ?
    b real8 ?
MyStruct ends


.code

; void c_func(int n)
c_func proto n:sdword

; int printf(const char *format, ...)
printf proto format:ptr byte, va:vararg


; long long x64_mult(long long a, long long b)
x64_mult proc public a:qword, b:qword

    mov rax,a                           ; rax = <a>
    imul rax, b                         ; rax = rax * <b>
    ret                                 ; return to caller, long long value in rax

x64_mult endp


; void x64_call_to_c_func(int n)
x64_call_to_c_func proc public uses rbx rdi n:dword parmarea = (4 * sizeof qword)  ; 4 * 8 = 32 bytes minimum

    mov edi, n                          ; save <n> in a safe place (non-volatile register)
    xor ebx, ebx                        ; clear loop counter
    .while ebx < edi                    ; while loop counter is less than <n>

        ; call printf in C runtime - "printf(format, loop counter)"
        invoke printf, cstr("\tcalling c_func() with %d...\n"), rbx

        ; call c_func in main.c - "c_func(loop counter)"
        invoke c_func, ebx

        add ebx, 1                      ; bump the loop counter
    .endw
    ret                                 ; return to caller, void

x64_call_to_c_func endp


; void x64_struct_by_reference(MyStruct *ps)
x64_struct_by_reference proc public uses rbx ps:ptr MyStruct parmarea = (4 * sizeof qword)  ; 4 * 8 = 32 bytes minimum

    mov rbx, ps                         ; save <ps> pointer in safe place (non-volatile register)

    ; fetch values from the structure
    mov edx, [rbx].MyStruct.a
    movsd xmm2, [rbx].MyStruct.b

    ; call printf in C runtime - "printf(format, int, double)"
    invoke printf, cstr("\tin x64_struct_by_reference(); a=%d, b=%f\n"), rdx, xmm2

    ; modify values in the structure (because we can)
    xorpd xmm0, xmm0
    add [rbx].MyStruct.a, 1
    movsd [rbx].MyStruct.b, xmm0
    ret

x64_struct_by_reference endp
