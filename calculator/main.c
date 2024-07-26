/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  float a,b,sum ;
  char out;
  printf ("enter which operator is needed:\n 1.addition \n2.subtraction\n3.division\n4.multiplication \n");
  scanf ("%c", &out);
  printf("enter 2 numbers:");
  scanf("%f %f",&a,&b);
  switch (out)
	{
	case '1':
	printf("sum is: %f",a+b);
	break;
	case '2':
    printf("sum is: %f",a-b);
    break;
	case '3':
	printf("sum is: %f",a/b);
	break;
	case '4':
    printf("sum is: %f",a*b);
    break;
    default:
    printf("invalid operator");
    break;
	}

  return 0;
}

