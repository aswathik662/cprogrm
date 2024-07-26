/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,lower,upper,prime=0;
    printf("enter lower number:");
    scanf("%d",&lower);
    printf("enter upper number:");
    scanf("%d",&upper);
    while(lower<upper)
    {
        prime=0;
    for(i=2;i<=lower/2;i++)
    {
        if(lower%i==0)
        {
            prime=1;
            break;
        }
    }
    
    if(prime==0)
    
        printf(" %d",lower);
        lower++;
    }
    
       return 0;
}
