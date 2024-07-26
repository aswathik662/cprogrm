/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,n=5,k;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
        printf(" * ");    
        }
        for(j=1;j<(n-i)*2;j++)
        {
           printf("   "); 
        }
        for(j=0;j<i;j++){
        printf(" * ");    
        }
        
        
        printf("\n");
    }
    for(i=0;i<9;i++)
    {
        printf(" * ");
    }
     printf("\n");
    for(i=1;i<n;i++){
        for(j=4;j>=i;j--)
        {
        printf(" * ");    
        }
        for(j=8;j>=(n-i)*2;j--)
        {
           printf("   "); 
        }
         for(j=4;j>=i;j--)
        {
        printf(" * ");    
        }
         
         printf("\n");
    }
    
    
        return 0;
}

