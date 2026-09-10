#include<stdio.h>
#include<math.h>
int main(){
    int b=0,c=0,mid=0,midplus=0,midminus=0,inbtw=0,count=0;
    double a;
    printf("Enter a odd number greater than 5:");
    scanf("%lf",&a);
    mid=(int)ceil(a/2);
    for (int i=0; i<mid;i++){
        midminus=mid-i;
        midplus=mid+i;
        for(int j=0; j<=a;j++){
            if(j==midminus || j==midplus){
                printf("*");
            }
            else{
                if(i == (mid-1) && j>midminus && j<midplus)
                {
                    printf("*");
                    count++;
                }
                else{
                printf(" ");
                }
            }
        }
        printf("\n");
    }
}