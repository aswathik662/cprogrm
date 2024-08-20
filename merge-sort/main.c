/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void mergesort();
void merge();
int main()
{
 int a[50],n,i;
 printf("enter the size:");
 scanf("%d",&n);
 printf("enter the elements:");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
mergesort(a,0,n-1);
printf("sorted elements are:");
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
    return 0;
}
void mergesort(int a[],int first,int last)
{
  int mid;
  if(first<last)
  {
      mid=(first+last)/2;
      mergesort(a,first,mid);
      mergesort(a,mid+1,last);
      merge(a,first,mid,last);
      
  }
}
void merge(int a[],int first,int mid,int last)
{
    int b[50];
   int i=first;
   int j=mid+1;
   int k;//first element of b[]
    while(i<=mid && j<=last)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(i>mid)
    {
        while(j<=last)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else(j>last);
    {
         while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
        for(i=first;i<=last;i++)
        {
            a[i]=b[i];
        }
    }
}