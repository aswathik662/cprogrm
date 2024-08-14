/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100],i,size,s,avg;
    printf("enter the array:");
    scanf("%d",&size);
    printf("enter the elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<size;i++)
   {
       s=s+a[i];
       avg=s/size;
   }
printf("avg is:%d",avg);
    return 0;
}
