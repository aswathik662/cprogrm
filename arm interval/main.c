/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
   int lw,up ,rem,sum;
   printf("enter lower number:");
   scanf("%d",&lw);
   printf("enter upper  number:");
   scanf("%d",&up);
   while(lw<up)
   {
   int i,n;
   
  for(i=lw;i<=up;i++)
  {
   lw=n;  
   while(n!=0)
   {
       rem=n%10;
       sum=sum+(rem*rem*rem);
       n=n/10;
      }
  }
   if(lw==sum)
   {
   printf(" %d",lw);
  }
  
   }
    return 0;
}