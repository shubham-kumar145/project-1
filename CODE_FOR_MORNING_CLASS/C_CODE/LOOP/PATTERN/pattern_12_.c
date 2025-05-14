#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1,k = i ; j <= number; k++,j++)
        {
            printf(" %d ",k);
        }
        printf("\n");
    }
    return 0;
}