/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],i,j,l,c;
    printf("enter a string:");
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l/2;i++)
    {
       c=s[i];
       s[i]=s[l-1-i];
       s[l-1-i]=c;
}
printf("%s",s);
    return 0;
}