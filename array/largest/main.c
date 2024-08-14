/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,i,a[100];
   printf("enter the array size:");
   scanf("%d",&num);
   printf("enter the elements:");
   for(i=0;i<num;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<num;i++)
   {
       if(a[0]<a[i])
           {
              a[0]=a[i];
           }
   }
   printf("largest number is:%d",a[0]);
         
    return 0;
}