#include<stdio.h>
int main(){
    int num1;
    printf("enter the number: ");
    scanf("%d",&num1);
    for(int i=num1;i>0;i--){
        for(int j=num1;j>i;j--){
            printf("  ");
        }
        for(int j = 1;j<=i;j++){
            if(i==1||i==num1||j==i||j==1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}