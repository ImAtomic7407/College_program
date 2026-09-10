#include<stdio.h>
#include<math.h>
int main(){
    int b,mid,midminus,midplus;
    double a;
    printf("Enter a number:");
    scanf("%lf",&a);
    mid= (int)ceil(a/2);
    for(int i=0;i<a;i++)
    {
        if(i==a/4)
        {
            printf("**");
        }
        else if(i==((a/2)+(a/4))-1){
            printf("**");
        }
        else
        {
            printf("  ");
        }
        for (int j=0;j<a;j++)
        {
            if((j<((a/2)+(a/4)-1) && (j>(a/4))))
            {
                printf("**");
            }
        }
        printf("\n");
    }
    return 0;
}