#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for(int i=0;i<number;i++){
        for(int j=0;j<number;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}