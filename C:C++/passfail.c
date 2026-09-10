#include<stdio.h>
int main(){
    int a;
    printf("Enter your marks..");
    scanf("%d",&a);
    a<=100 && a>90? printf("A++"):a>80 ? printf("A+"): a>75? printf("A"):printf("Fail");
}