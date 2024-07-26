/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float P,R,N,t,A,n;
    printf("enter p value:");
    scanf("%f",&P);
    printf("enter r value:");
    scanf("%f",&R);
    printf("enter n value:");
    scanf("%f",&N);
    printf("enter t value:");
    scanf("%f",&t);
    printf(" the total interest you earned is:");
     A = P*pow(1 + R/N, n*t);
     printf("%f",A);

    return 0;
}
