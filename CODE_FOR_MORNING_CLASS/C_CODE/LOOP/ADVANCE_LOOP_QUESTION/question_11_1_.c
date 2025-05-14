#include<stdio.h>
int main(){
    int num1;
    printf("enter the number: ");
    scanf("%d",&num1);
    for (int i = 1; i <= num1; i++)
    {
        for(int j = 1;j<=num1;j++){
            if(i==1||j==1||i==num1||j==num1){
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
