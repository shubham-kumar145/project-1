#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for(int i = 1;i<=number;i++){
        if(i==1){
            for(int j = 1;j<=number;j++){
                printf("%d ",j);
            }
        }
        else{
            printf("%d",i);
        }
        printf("\n");
    }
}