/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a,b,product;
   printf("enter 2 numbers");
   scanf("%d %d",&a,&b);
   if((a>0)&&(b>0))
   {
       product=a*b;
       printf("product=%d",product);
       if(product%2==0)
       {
           printf("%d is even",product);
       }
       
       
      
       {
           printf("%d is odd",product );
       }
   }
  return 0; 
   
}