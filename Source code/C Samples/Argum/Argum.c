/*
   This is the World's most powerful example C program - only 3 
   statements, functions and without other variables except standard 
   parameters - prints DOS command line arguments.
   Argum.c, 23.10.2005, Mr Veli Suorsa, Oulu/ Finland

   Usage example:  argum -R -N -Call
*/

#include <stdio.h>		//  For puts

////////////////////
//  Main Program
int
main (int argc, char **argv)
{
  while (--argc)		//  While there are more command line arguments,
    puts (*++argv);		//  print arguments.
}
