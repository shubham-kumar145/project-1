#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for (int  j = 1; j <= number; j++)
        {
            if((i==j)||(i+j==number+1)){
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