/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a,b,sum;
   printf("enter 2 numbers:");
   scanf("%d %d",&a,&b);
   int num=1;
   while((a!=0)||(b!=0))
   {
       sum=((a/num)||(b/num));
       num=num+1;
       printf("%d",sum);
   }

    return 0;
}