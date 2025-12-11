Sample that demonstrates a 'tip of the day' custom control.

**Setup instructions**:<br>
Build the project. Start the dialog resource editor. Choose Dialog -> Open custom control. Go to the project directory and select **tipofday.dll**. Now you can use the Custom control button (<img src="./custcntl.png" alt="Custom control tool" />) to create a new 'tip of the day' control in a dialog. You can send the control a TM_FORCETIP or TM_NEXTTIP message, see intrface.h.

Remember that you must load **tipofday.dll** in your application with **LoadLibrary**, and also distribute the DLL with your application.

**Author**: Pelle Orinius 
