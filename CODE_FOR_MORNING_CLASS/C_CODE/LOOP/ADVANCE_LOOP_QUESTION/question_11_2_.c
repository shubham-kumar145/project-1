#include<stdio.h>
int main(){
    int num1;
    printf("enter the number: ");
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++){
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