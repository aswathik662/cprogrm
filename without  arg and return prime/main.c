/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void prime();
int main()
{
  prime();

}
void prime()
{
int i,num,p;
printf("enter the number:");
scanf("%d",&num);
for(i=2;i<num;i++)
{
    if(num%i==0)
    {
        p=1;
        break;
    }
}
if(p==0)
{
    printf("this is a prime number");
}
else
{
    printf("this is not a prime number"); 
}
}
