/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int i,j;
for(i=0;i<=9;i++)
{
    for(j=0;j<=6;j++)
    {
    if( j==0 &&(i!=0  ) )
    {
     printf("*");   
    }
    else if ( j<=5 && i%9==0)
    {
       printf("*");  
    }
    else if ( i==4 &&(j==4 || j==5 || j==6) )
    {
       printf("*");  
    }
    else if ( j==6 &&( i==5 ||i==6 || i==7 || i==8) )
    {
       printf("*");  
    }
    else
    {
        printf(" ");
    }
   
}
printf("\n");
}

    return 0;
}