#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            if((i ==number/2 && j == number/2)){
                printf("0 ");
            }
            else{
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}