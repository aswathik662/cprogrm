/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,temp;
 int a[10]={1,2,3,2,5,1,2,3,1,5};
 for(i=0;i<10;i++)
 {
     for(j=i+1;j<10;j++)
     {
      if(a[i]==a[j])
      {
          temp=a[i];
           printf("%d",temp);
           break;
      }
      }
     
 }
}
