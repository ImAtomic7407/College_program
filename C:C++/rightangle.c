#include<stdio.h>
int main(){
    printf("Enter a no.");
    int a,b,c;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}