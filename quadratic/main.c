/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,x;
    printf("enter 3 variables:");
    scanf("%d %d %d",&a,&b,&c);
    x=-b + -sqrt(b*b-4*a*c)/2*a;
    printf("%d",x);

    return 0;
}