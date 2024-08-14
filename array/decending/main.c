/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,temp;
   int a[10]={2,1,10,5,4,6,7,9,8,3};
   for(i=0;i<10;i++)
   {
       for(j=i+1;j<10;j++)
       {
        if(a[j]>a[i])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
       }
       printf("%d",a[i]);
   }
   
    return 0;
}
