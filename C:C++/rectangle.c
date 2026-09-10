#include<stdio.h>
int main(){
    int l,b;
    printf("Enter lenght:");
    scanf("%d",&l);
    printf("Enter breath:");
    scanf("%d",&b);
    for (int i=0;i<b;i++){
        for (int j=0;j<l;j++){
            if(j==(l-1) || j==0){
            printf("|");
            }
            else if(((i==0) ||i==(b-1))&&(j!=0 ||j!=(l-1))){
                printf("---");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
}