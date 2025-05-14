#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for(int i =0;i<number;i++){
        for(int j=number;j>i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}