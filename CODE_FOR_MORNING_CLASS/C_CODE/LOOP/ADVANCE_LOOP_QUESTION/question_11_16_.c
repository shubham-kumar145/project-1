#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for(int i = 1 ;i<=number;i++){
        for(int j =i;j<number;j++){
            printf("  ");
        }
        for(int j = i;j>1;j--){
            printf("%d ",j);
        }
        for(int j =1 ;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}