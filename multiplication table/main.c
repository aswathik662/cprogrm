/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,i=1,mul;
    printf("enter a number");
    scanf("%d",&num);
    printf("multiplication table of %d\n",num);
    while(i<=10)
    {
        mul=i*num;
        printf("%d\n",mul);
        i++;
    }
    return 0;
}