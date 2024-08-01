/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int fib(int,int,int);
int main()
{
int num,c,f0=0,f1=1;
printf("enter a number:");
scanf("%d",&num);
printf("%d\n",f0);
printf("%d\n",f1);
fib(f0,f1,num);
return 0;
}

int fib(int f0,int f1,int num)
{
int fn;
if(num>2)
{
fn=f0+f1;
printf("%d\n",fn);
f0=f1;
f1=fn;
return fib(f0,f1,num-1);
}
}
