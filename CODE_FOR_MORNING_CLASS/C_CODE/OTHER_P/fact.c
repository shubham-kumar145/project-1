// // __factorial of 'n' number__
// #include<stdio.h>
// int main(){
//     printf("****************************\n");
//     int number,fact=1;
//     printf("enter the number: ");
//     scanf("%d",&number);
//     int g_num = number;
//     while(number >=2 ){
//         fact = fact * number;
//         number --;
//     }
//     printf("factorial of %d is: %d",g_num,fact);
//     return 0;
// }

// __sum of all number of 'n'__
#include <stdio.h>
int main()
{
    int number, sum;
    printf("****************************\n");
    printf("enter the number: ");
    scanf("%d", &number);
    int g_num = number;
    while (number > 0)
    {
        sum = sum + number;
        number--;
    }
    printf("sum of %d is: %d", g_num, sum);
    return 0;
}