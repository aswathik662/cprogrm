/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,j,n=4;
   for(i=0;i<=n;i++)
   {
       for(j=-n;j<=n;j++)
       {
           if(-(n-i)<j && j<(n-i))
           {
               printf("  ");
               
           }
           else
           {
               printf("* ");
           }
       }
       printf("\n");
   }
   for(i=1;i<=n;i++)
   {
       for(j=-n;j<=n;j++)
       {
           if(-i<j && j<i)
           {
               printf("  ");
               
           }
           else
           {
               printf("* ");
           }
       }
       printf("\n");
   }
   

    return 0;
}