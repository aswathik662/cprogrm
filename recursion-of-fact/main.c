/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int facto(int);
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
   printf("Factorial of %d is:",facto(num));
    return 0;
   
}
int facto( int num);
{
    int fact,i;
    
for(i=1;i<=num;i++)
    {
        fact=fact*i;
        if(num==0)
        {
            return 1;
        }
        else
        {
            return num*fact(num-1); 
        }
        }
}

