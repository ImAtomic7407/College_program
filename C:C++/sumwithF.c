#include<stdio.h>
int add(int a, int b)
{
    return (a+b);
}
int main(){
    int a,b;
    printf("Enter your 1st and 2nd no.:");
    scanf("%d %d",&a,&b);
    printf("The sum of %d and %d is %d",a,b,add(a,b));
    return 0;
}