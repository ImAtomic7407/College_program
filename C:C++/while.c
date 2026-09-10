#include<stdio.h>
int main(){
    int a=0, i=0;
    printf("Enter a number:");
    scanf("%d",&a);
    while(i<=a){
        printf("%d\n",i);
        i++;
    }
    return 0;
}