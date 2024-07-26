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
       for(j=0;j<=n;j++)
       {
           if(i==0 || i==4)
           {
               printf("*");
           }
           else if( i==1 && (j==3))
           {
             printf("*");  
           }
           else if( i==2 && (j==2))
           {
             printf("*");  
           }
           else if( i==3 && (j==1))
           {
             printf("*");  
           }
           else
           {
               printf(" ");
           }
       }
       printf("\n");
   }

    return 0;
}