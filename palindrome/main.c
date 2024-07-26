/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,num,rem;
    printf("enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        
        rem=num%10;
        a=num/10;
        printf("%d",rem);
        num=a;
         }
         
         if(a!=num)
        {
            printf("this is not a palindrome");
        }
        else
        {
            printf("this is  a palindrome");
        }
    

    return 0;
}
