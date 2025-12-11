/*
   This example C program tests and prints DOS command line 
   arguments and execute functions.
   Argtest.c, 2.1.2006, Mr Veli Suorsa, Oulu/ Finland.

   Usage example:  argtest -R -N -Call  -O -W -V -S
*/

#include <stdio.h>		//  For printf
#include <stdlib.h>		//  For EXIT_FAILURE, EXIT_SUCCESS
#include <string.h>		//  For strcmp


/////////////////
//  Functions

void
doLongDistanceMobileCall (void)
{
  printf ("-Call  Run doLongDistanceMobileCall () !\n");
  printf ("Please, call your partner to buy to you 3 G mobile phone!\n");
}

void
doNuclearPower (void)
{
  printf ("-N  Run doNuclearPower () !\n");
  printf ("Clean, economical 35 p share in EU by 2010 (better KIO2)!\n");
}

void
doOil (void)
{
  printf ("-O  Run doOil() !\n");
  printf ("At public request, still driving gasoline car!\n");
}

void
doRenewables (void)
{
  printf ("-R  Run doRenewables () !\n");
  printf ("Clean, 14 p share in EU by 2010!\n");
}

void
doSaving (void)
{
  printf ("-S  Run doSaving() !\n");
  printf
    ("Clean, 15 p saving in electric power and heating in EU by 2010!\n");
}

void
doVote (void)
{
  printf ("-V  Run doVote() !\n");
  printf
    ("Use your big Vote! Nothing to do in the parliament, if you have under 5 p share!\n");
}

void
doWindPower (void)
{
  printf ("-W  Run doWindPower() !\n");
  printf ("Clean, 40 p growth/ year in EU by 2010!\n");
}

void
doUsage (void)
{
  printf ("Copyright (C), 1990 by V.S. Energy Company 3 ;-)\n");
  printf ("Usage  :  Argtest [op tions]\n");
  printf ("options:  -R -N -Call  -O -W -V -S\n");
}


////////////////////
//  Main Program
int
main (int argc, char *argv[])
{
  int known, x;
  known = 0;			//  Argument default not known = 0.

  for (x = 1; x < argc; x++)
    {
      //  All Functions can run together in one DOS command line.
      //  Note exact string compare "strcmp()"; must be "-N", not "-n".
      if (strcmp ("-Call", argv[x]) == 0)
	{
	  known = 1;
	  doLongDistanceMobileCall ();
	}
      if (strcmp ("-N", argv[x]) == 0)
	{
	  known = 1;
	  doNuclearPower ();
	}
      if (strcmp ("-O", argv[x]) == 0)
	{
	  known = 1;
	  doOil ();
	}
      if (strcmp ("-R", argv[x]) == 0)
	{
	  known = 1;
	  doRenewables ();
	}
      if (strcmp ("-S", argv[x]) == 0)
	{
	  known = 1;
	  doSaving ();
	}
      if (strcmp ("-V", argv[x]) == 0)
	{
	  known = 1;
	  doVote ();
	}
      if (strcmp ("-W", argv[x]) == 0)
	{
	  known = 1;
	  doWindPower ();
	}
      //  etc ...

      //  Test, if argument is not within functions and print it.
      if (known == 0)
	{
	  printf ("  Unknown argument: %s\n", argv[x]);
	}

      //  Next argument default is not known = 0.
      known = 0;
    }				//  End for (x = ...

  //  If no arguments are given in DOS command line, then print Usage.
  if (argc == 1)
    {
      doUsage ();
      return EXIT_FAILURE;
    }

  //  Exit program
  return EXIT_SUCCESS;
}
