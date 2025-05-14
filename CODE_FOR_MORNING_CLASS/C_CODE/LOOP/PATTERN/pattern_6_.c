#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for (int i = 0; i < number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if(i%2==0 && j%2!=0){
                printf("1 ");
            }
            else if(i%2!=0 && j%2==0){
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