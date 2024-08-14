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
    char s1[100],i,l,j,flag;
    printf("enter a string:");
    scanf("%s",s1);
    l=strlen(s1);
    for(i=0;i<l;i++)
    {
        flag=0;
        for(j=0;j<l;j++)
        {
            if(s1[i]==s1[j] && i!=j)
            {
                flag=1;
                break;
            }
        }    
    
    if(flag==0)
    {
        printf("%c",s1[i]);
      
    }
    
    }
    
    return 0;
}
