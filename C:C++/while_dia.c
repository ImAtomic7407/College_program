#include<stdio.h>
void rightsideangle(){
    int i=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n){
        int j=1;
        while(j<=i){
            printf("*");
            j++;
        }
        i++;
        printf("\n");
    }
}

void leftsideangle(){
    int a,i,c;
    printf("Enter a number:");
    scanf("%d",&a);
    i=a;
    while(i>=0){
        int j=0;
        while(j<=a)
        {
            if(j>=i){
                printf("*");
            }
            else if(j<i){
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i--;
    }
}

int main(){
    int a;
    printf("What do you wanna do: \n 1.)Right Sided Angle \n 2.) Left Sided Angle\n");
    scanf("%d",&a);
    switch(a)
    {
        case 2:
         {
        leftsideangle();
        break;
         }
        case 1: {
            rightsideangle();
            break;
        }
    }
    return 0;
}