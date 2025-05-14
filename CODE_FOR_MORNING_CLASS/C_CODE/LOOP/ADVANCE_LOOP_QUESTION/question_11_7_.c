#include<stdio.h>
int main(){
    int num1,last;
    printf("enter the number: ");
    scanf("%d",&num1);
    for(int i=num1;i>0;i--){
        last=(2*i)-1;
        for(int j=num1;j>i;j--){
            printf("  ");
        }
        for(int j=1;j<=last;j++){
            if(j==1||j==last||i==num1){
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