#include<stdio.h>
int main(){
    int a,b,c;
    int i,j;
    printf("Enter no.");
    scanf("%d",&a);
    for(i=a;i>=0;i--){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}