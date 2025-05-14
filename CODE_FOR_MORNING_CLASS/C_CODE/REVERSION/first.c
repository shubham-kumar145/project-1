#include <stdio.h>
int main()
{
    int num1, num2, num3;
    char ch ='A';
    printf("enter the number: ");
    scanf("%d", &num1);
    for (int i = 1; i <= num1; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= num1; j++)
            {
                if(j%2==0){
                    printf("%c",ch+j);
                }
                else{
                    printf(" ");
                }
            }
        }
        else{

        }
    }
}