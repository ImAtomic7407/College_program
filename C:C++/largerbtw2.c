#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 1st no.");
    scanf("%d",&a);
    printf("Enter 2nd no.");
    scanf("%d",&b);
    a>b?printf("%d is greater than %d",a,b):printf("%d is greater than %d",b,a);
    return 0;
}