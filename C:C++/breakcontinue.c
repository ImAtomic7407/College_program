#include<stdio.h>
#include<math.h>
int cat(){
    int a=2,b=3,c=4;
    for (int i =0; i<=c; i++)
    {
        if(i!=a){
            printf("%d this is correct...",i);
            break;
        }
        printf("%d",i);
        printf("\n");
    }
    return a;
}

void pyramid(){
    int mid, midplus, midminus;
    double a;
    printf("Enter a number");
    scanf("%lf",&a);
    mid=(int)((a/2));
    for(int i=0; i<a/2; i++)
    {
        midminus=mid-i;
        midplus=mid+i;
        for (int j=0; j<=a; j++)
        {
            if((j>midminus && j<midplus) || (j==midminus && midplus))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){
    int a= cat();
    printf("\n%d",a);
    pyramid();
}