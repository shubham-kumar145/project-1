#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for(int i= 1 ,k=number; i<=number;k--,i++){
        for(int j = 1;j<=k;j++){
            printf("  ");
        }
        for(int j = 1 ; j <= 2*i -1;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}