/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=1,num=0,new;
   printf("Enter a number:");
   scanf("%d",&num);
   printf("enter the limit:");
   scanf("%d",&new);
   for(i=1;i<=new;i++){
       printf("%d \n",(num*i));
   }

    return 0;
}
