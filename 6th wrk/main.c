/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,n=5,a=1,b=30;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            printf("%d ",b);
            b=b-2;
        }
        printf("\n");
    }
    return 0;
}