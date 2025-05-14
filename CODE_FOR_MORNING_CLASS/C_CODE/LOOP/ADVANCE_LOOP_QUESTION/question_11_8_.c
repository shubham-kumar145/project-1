#include <stdio.h>
int main()
{
    int num1;
    printf("enter the number: ");
    scanf("%d", &num1);
    for (int i = 0; i < num1; i++)
    {
        if (i == 0)
        {
            for (int j = 1; j <= (2 * num1) - 1; j++)
            {
                printf("* ");
            }
        }
        else{
            for(int j = i;j<num1;j++){
                printf("* ");
            }
            for(int j = 1;j<=(2*i) - 1;j++){
                printf("  ");
            }
            for(int j = num1;j>i;j--){
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}