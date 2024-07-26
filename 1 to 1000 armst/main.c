/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,rem,n,sum;
  
   printf("armstrong numbers are:");
   
  for(i=1;i<=1000;i++)
   { 
       sum=0;
       n=i;
   while(n!=0)
   {
       rem=n%10;
       sum=sum+(rem*rem*rem);
       n=n/10;
      }
   
   if(sum==i)
   {
        printf("%d",i);
   }
   }
    return 0;
}