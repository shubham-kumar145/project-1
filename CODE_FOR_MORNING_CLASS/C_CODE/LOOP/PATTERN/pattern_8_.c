#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if((i+j==number+1)||(i==j)){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}