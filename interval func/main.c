/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void prime(int,int);
int main()
{
    int lc,uc;
    printf("enter lower number:");
    scanf("%d",&lc);
    printf("enter upper number:");
     scanf("%d",&uc);
     prime(lc,uc);
}
void prime(int a,int b)
{
  int i,p;  
    while(a<b)
    {
      p=0;
      for(i=2;i<=a/2;i++)
      {
          if(a%i==0)
          {
              p==1;
              break;
          }
      }
      if(p==0)
      {
          printf("%d",a);
          a++;
      }
    }
}
   