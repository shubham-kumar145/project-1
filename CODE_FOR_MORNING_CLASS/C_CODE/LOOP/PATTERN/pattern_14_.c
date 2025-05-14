#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ",number-j);
        }
        for (int l = 0; l < number-i; l++)
        {
            printf("%d ",number-i);
        }
        
        printf("\n");
    }
    return 0;
}