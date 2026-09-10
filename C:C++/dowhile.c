#include<stdio.h>
int main(){
    int a=0, i=0;
    printf("Enter a number..:");
    scanf("%d",&a);
    do
    {
        printf("%d",i);
        printf("\n");
        i++;
    } while(i<a);
}