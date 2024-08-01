/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
void prime(int);
void arm(int);
int main()
{
    int num;
    printf("enter a no:");
    scanf("%d",&num);
   arm(num);
    prime(num);
}
void arm(int num)
{
    int n,rem,sum,count=0,temp;
    n=num;
    temp=num;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
   
     while(n!=0)
    {
        rem=n%10;
       sum=sum+pow(rem,count);
       n=n/10;
        }
         if(num==sum)
         {
             printf("number is armstrong\n");
         }
         else
         {
             printf("number is not a armstrong\n");
         }
}
void prime(int num)
{
    int prim=0,i;
    for(i=2;i<num;i++)
    {
       if(num%i==0)
       {
        prim=1;
        break;   
       }
        
    }
    if(prim==0)
    {
        printf("number is prime\n");
    }
    else
    {
        printf("number is not prime\n");
    }
}
