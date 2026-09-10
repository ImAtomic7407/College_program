#include<stdio.h>
#include<math.h>
int main(){
    int a=0,b=0;
    int re=0;
    printf("Enter a odd number");
    scanf("%d",&a);
    printf("How many times?");
    scanf("%d",&re);
    int mid = ceil(a/2);
    for(int k=0;k<re;k++){
        b=0;
    for (int i=0; i<a;i++){
        if(i<mid){
            b++;
        }
        else if(i>=mid){
            b--;
        }
        for (int j=0; j<=mid; j++){
            if(j==b){
                printf("*");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    }
}