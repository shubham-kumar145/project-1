#include<stdio.h>
int main(){
    int number,sum=0,num2;
    printf("enter the number : ");
    scanf("%d",&number);
    num2=number;
    while(num2>0){
        sum = sum +num2;
        num2-- ;
    }
    for(int i=0,k=number;i<number;i++,k--){
        for(int j =1;j<=i;j++){
            printf("  ");
        }
        for(int j = 1 ; j<=(2*k)-1;j++){
            if(j%2!=0){
                printf("%d",sum);
                sum--;
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}