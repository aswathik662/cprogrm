/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int A,B,C,D,F,num;
    printf("enter your mark:");
    scanf("%d",&num);
    if(num>89 && num<=100)
    {
        printf("A");
    }
    else if(num>80 && num==80)
    {
        printf("B");
    }
    else if(num>70 && num ==70)
    {
        printf("C");
    }
     else if(num>60 && num ==60)
    {
        printf("D");
    }
     else if(num>100)
    {
        printf("invalid");
    }
    else 
{
    printf("F");
}
    return 0;
}
