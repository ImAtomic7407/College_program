#include<stdio.h>
int main()
{
    int a,b=0,c=0;
    char reverse_number[4];
    printf("\n Enter a 3 digit number:");
    scanf("%d",&a);
    for(int i=100,j=1; i>=1; i=i/10,j=j*10){
        b=a/i;
        a=a%i;
        c=c+(b*j);
    }
    printf("The reverse of the number is:%d",c);
}