/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum();
void main()

{
    int result;
    printf("\n Going to calculate the sum of 2 numbers:");
   result=sum();
   printf("%d",result);
}
int sum()
{
    int a,b;
    printf("\n Enter 2 numbers:");
    scanf("%d %d",&a,&b);
    return a+b;
}

  
