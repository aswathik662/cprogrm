/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void amstrong(int);
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    amstrong(num);
    return 0;
}
void amstrong(int num)
 {
     int n,sum,rem;
    n=num;
    while(n!=0)
    {
    rem=n%10;
    sum=sum+(rem*rem*rem);
    n=n/10;
    }
    if(num==sum)
    {
        printf("it is a amstrong no");
    }
    else
    {
         printf("it is not a amstrong no:");
    }
   
}

