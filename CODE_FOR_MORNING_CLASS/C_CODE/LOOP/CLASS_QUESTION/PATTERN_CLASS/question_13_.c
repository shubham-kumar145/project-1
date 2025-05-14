#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for(int i = number,j=1;i>0;i--,j++){
        for(int k= 1;k<j;k++){
            printf("  ");
        }
        for(int k = 1;k<= 2*i - 1;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}