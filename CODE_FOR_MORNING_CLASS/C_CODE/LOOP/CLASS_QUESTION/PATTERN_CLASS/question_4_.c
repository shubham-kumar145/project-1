#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for(int i=number;i>0;i--){
        for(int j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}