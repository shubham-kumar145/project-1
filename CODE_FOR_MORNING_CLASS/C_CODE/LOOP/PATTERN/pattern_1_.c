/*
1 1 1 1 1 1
1 1 1 1 1 1
1 1 1 1 1 1
1 1 1 1 1 1
1 1 1 1 1 1
1 1 1 1 1 1
*/
#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            printf("1 ");
        }
        printf("\n");
    }
    
    return 0;
}


#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            
        }
        printf("\n");
    }
    return 0;
}