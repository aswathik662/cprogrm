/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int arm(int);
int main()
{
   int num,res;
   printf("enter a number:");
   scanf("%d",&num);
   res=arm(num);
   printf(" %d",res);
}
int arm(int num)
{
    int n,sum,rem,result;
 n=num;
   while(n!=0)
   {
       rem=n%10;
       sum=sum+(rem*rem*rem);
       n=n/10;
       
     
       
   }
   if(num==sum)
   {
   printf("it is a armstrong number");
  }
  else
  {
     printf("it is not a armstrong number"); 
  }
  return result;
}
    
