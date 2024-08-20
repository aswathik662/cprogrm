/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct vehicle
{
    char  name[100];
    int wheel;
    char vname[100];
    char mname[100];
   
};

int main()
{
    int c,option,i=0,f=0,b,d=0,tyres,u;
   struct vehicle v[100];
   a:
     printf("\n1.create vehicle details\n2.display vehicle details\n3. exit\n");
     printf("enter the option:\n");
     scanf("%d",&option);
    switch(option)
     {
         case 1:
          printf("enter owner name :");
          scanf("%s",v[i].name);
          printf("enter vehicle name:");
            scanf("%s",v[i].vname);
            printf("enter model name:");
            scanf("%s",v[i].mname);
            printf("enter no.of tyre:");
            scanf("%d",&v[i].wheel);
            if(v[i].wheel>4||v[i].wheel<2)
            {
                w:
                printf("invalid\n");
                printf("enter a valid number:");
                scanf("%d",&u);
                if(u>4||u<2)
                {
                    goto w;
                }
                v[i].wheel=u;
            }
           
            
            i=i+1;
            goto a;
            break;
        case 2:
        b:
            printf("\n2tyre \n3tyre \n4tyre\n5exit\n");
            printf("enter your choice:");
            scanf("%d",&c);
            if(c==2)
            {
                for(i=0;i<100;i++)
                {
                    if(2==v[i].wheel)
                    {
                   printf ("%s\n",v[i].name);
                   printf("%s\n",v[i].vname);
                    printf("%s\n",v[i].mname);
                    printf("%d\n",v[i].wheel);
                    //  d=1;
                    }
                }
            //     if(d==0)
            // {
            //     printf("invalid");
            // }
              goto  f;
            }
            else if(c==3)
            {
            for(i=0;i<100;i++)
            {
                 if(3==v[i].wheel)
                {
                printf ("%s\n",v[i].name);
                   printf("%s\n",v[i].vname);
                    printf("%s\n",v[i].mname);
                    printf("%d\n",v[i].wheel);
                   
                //   d=1;
                }
            }
            //      if(d==0)
            // {
            //     printf("invalid\n");
            // }
             goto  f;
            }
            else if(c==4)
            {
            for(i=0;i<100;i++)
            {
            if(4==v[i].wheel)
            {
               printf ("%s\n",v[i].name);
               printf("%s\n",v[i].vname);
                printf("%s\n",v[i].mname);
                printf("%d\n",v[i].wheel); 
            
            // d=1;
              
            }
            }
            //  if(d==0)
            // {
            //     printf("invalid");
            // }
              goto  f;
           }
            
        else if(c==5)
            {
                goto a;
            }
             f:
            if(f==0)
            {
                printf("enter the crrct no.");
            } 
        //  else
        //  {
        //          printf("there is no match");
        //     }
            
          
           goto b;
             break;
             case 3:
              exit(0);
        	 break;
        	 default:
                printf("Invalid option. Please try again.\n");
     }
             
    goto a;
    return 0;
}