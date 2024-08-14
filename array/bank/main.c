/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
struct employee 
 { 
 char name[50];
 int age;
 char place[50];
 int phone;
 float amount;
 }

int main()
{
   int i;
   struct employee e[100];
   for(i=0;i<100;i++)
   {
    scanf("%s %d %s %d %f",e[i].name,&e[i].age,e[i].place,&e[i].phone,&e[i].amount);
    }
    for(i=0;i<100;i++)
    {
       printf("%s %d %s %d %f",e[i].name,&e[i].age,e[i].place,&e[i].phone,&e[i].amount); 
    }
     
    return 0;
}