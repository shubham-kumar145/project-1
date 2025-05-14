#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
    {
        for (int j = i; j >1; j--)
        {
            printf("%d ",j);
        }
        for(int k=0;k<=number-i;k++){
            printf("%d ",k+1);
        }
        printf("\n");
    }
    return 0;
}

//  #include<stdio.h>
// int main(){
//     int number;
//     printf("enter the number: ");
//     scanf("%d",&number);
//     for (int i = 1; i <= number; i++)
//     {
//         for (int j = i; j >0; j--)
//         {
//             printf("%d ",j);
//         }
//         for(int k=1;k<=number-i;k++){
//             printf("%d ",k+1);
//         }
//         printf("\n");
//     }
//     return 0;
// }
