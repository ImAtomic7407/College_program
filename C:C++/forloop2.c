#include<stdio.h>
int main(){
    int i;
    for(i=0; i<=50; i++){
        if(i%2==0){
            printf("%d",i);
            for(int j=0;j<=2;j++){
                printf("*");
            }
        }
        printf("\n");
    }
}