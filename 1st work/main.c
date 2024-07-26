#include <stdio.h>
int main()
{
    int num;
    printf("enter your age:");
    scanf("%d",&num);
    if(num>18 || num==18)
    {
        printf(" eligible");
    }
    else
    {
        printf("not eligible");
    }
    return 0;
}