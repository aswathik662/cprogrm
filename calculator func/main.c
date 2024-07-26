
#include <stdio.h>
int cal(int,int,int);
int main ()
{
  int a,b,out,res;
 
  printf ("\nenter your choice:\n 1.addition \n2.subtraction\n3.division\n4.multiplication \n");
  scanf ("%d", &out);
  cal(a,b,out);

}
int cal(int a,int b, int out)
{
int res;
 
  switch (out)
	{
	case 1:
    printf("enter 2 numbers:");
    scanf("%d %d",&a,&b); 
	res=a+b;
	printf("sum is: %d",res);
	break;
	case 2:
	 printf("enter 2 numbers:");
    scanf("%d %d",&a,&b); 
	res=a-b;
     printf("sum is: %d",res);
    break;
	case 3:
     printf("enter 2 numbers:");
    scanf("%d %d",&a,&b); 
    if(b==0)
	{
	    printf("invalid");
	}
	else{
	   	res=a/b;
	printf("sum is: %d",res);
	}
	break;
	case 4:
     printf("enter 2 numbers:");
    scanf("%d %d",&a,&b); 
	res=a*b;
    printf("sum is: %d",res);
    break;
    default:
    printf("invalid operator");
    break;
    return res;
	}


}

