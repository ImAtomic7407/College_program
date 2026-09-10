#include<stdio.h>


int tableprint()
{
   int a=0;
   printf("Enter a number:");
   scanf("%d",&a);
   int i=1;
   k:
   if(i<=10)
    {
       printf("\n%d x %d = %d\n",i,a,(a*i));
       i++;
       goto k;
    }
   return 0;
}


void mountain()
{
    int a;
    printf("\nEnter a number:\n");
    scanf("%d",&a);
    int i=0;
    k:
    if(i<=a){
        int j=0;
        h:
        if(j<=i){
        printf("%d",j);
        j++;
        goto h;
        }
        printf("\n");
        i++;
        goto k;
    }
}

int main(){
    int a;
    printf("What do you wanna do: \n 1.)Mountain \n 2.) table\n");
    scanf("%d",&a);
    switch(a)
    {
        case 2:
         {
           tableprint();
           break;
         }
        case 1: {
           mountain();
           break;
        }
    }
    return 0;
}
