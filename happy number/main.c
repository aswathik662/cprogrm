/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n,x,sum,rem;
   printf("enter a number:");
   scanf("%d",&n);
   x=n;
   while (x>=10)
   {
       sum=0;
       while(x>0)
       {
           rem=x%10;
           sum+=rem*rem;
           x/=10;
       }
       x=sum;
   }
   if(sum==1)
   {
       printf("%d is a happy number\n",n);
       }
       else
       {
           printf("%d is not a happy number\n",n);
       }
    return 0;
}