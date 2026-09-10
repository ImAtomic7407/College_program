#include<stdio.h>
int main(){
    int t,r,p;
    printf("Enter the time, rate and principle:");
    scanf("%d %d %d",&t,&r,&p);
    double simpleinterest;
    simpleinterest = (t*r*p)/100;
    printf("simple interest is:%.10lf",simpleinterest);
 return 0;   
}
