/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,a[100],i;
    printf("enter the size of the array:");
    scanf("%d",&num);
     printf("enter the numbers:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
        if(a[0]<a[i])
        a[0]=a[i];
    }
    printf("maximum number is%d\n",a[0]);
    for(i=0;i<num;i++)
    {
        if(a[0]>a[i])
    {
      a[0]=a[i];  
    }
    }
    printf("mi number is%d",a[0]);
    
    return 0;
}
