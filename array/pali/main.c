/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100],i,flag=0,l;
    printf("enter a string:");
    scanf("%s",s1);
    l=strlen(s1);
    for(i=0;i<l;i++)
    {
        if(s1[i]!=s1[l-i-1])
        {
           flag=1;
            break;
        }
        }
   
    if(flag==0)
    {
      printf("it is  a palindrome") ; 
    }
    else
    {
        printf("it is not a palindrome") ; 
    }
    return 0;
}
