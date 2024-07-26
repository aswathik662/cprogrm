/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum (int);
int main()

{
   int n,c;
   printf("enter  number:");
   scanf("%d",&n);
  c=sum(n);
  printf("sum is:%d",c);
   
}
int sum(int n)
{
    
    if(n==1)
    {
        
    return 1;
    }
    else
{
    return n+sum(n-1);
}
return 0;
}



