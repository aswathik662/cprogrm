/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void sum(int);
void main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
   sum(num);
    
}
void sum(int num)
{
    int rem,a;
    while(num!=0)
    {
        
    
    rem=num%10;
    a=num/10;
    printf("%d",rem);
    num=a;
    }  
}
