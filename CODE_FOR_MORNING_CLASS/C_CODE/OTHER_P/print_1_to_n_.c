// #include<stdio.h>
// int main (){
//     int SSP,SP,EP;
//     printf("enter the starting point: ");
//     scanf("%d",&SSP);
//     printf("enter the endpoint: ");
//     scanf("%d",&EP);
//     while (EP!=SSP)
//     {
//         SP=SSP;
//         while (SP<=EP)
//         {
//             printf("%d",SP);
//             SP=SP+1;
//         }
//         printf("\n");
//         SSP++;
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int number,fact=1;
    printf("enter the number: ");
    scanf("%d",&number);
    int g_num = number;
    while(number >=2 ){
        fact = fact * number;
        number --;
    }
    printf("factorial of %d is: %d",g_num,fact);
    return 0;
}
#include<stdio.h>
int main(){
    int number,sum=0;
    printf("enter the number: ");
    scanf("%d",&number);
    int g_num = number;
    while(number > 0 ){
        sum = sum + number;
        number --;
    }
    printf("sum of %d is: %d",g_num,sum);
    return 0;
}