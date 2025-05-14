/*
13.Write a program to take two number from user and find average of all number present
 between them.
*/
#include<stdio.h>
int main(){
    int number1,number2,sum=0,count=0;
    float avg;
    printf("enter the first number: ");
    scanf("%d",&number1);
    printf("enter the second number: ");
    scanf("%d",&number2);
    while(number1<=number2){
        sum=sum+number1;
        count=count+1;
        number1=number1+1;
    }
    avg=sum/count;
    printf("average = %.2f",avg);
    return 0;
}
// #include<stdio.h>
// int main(){
//     printf("");
//     scanf("%", );
//     while(){
        
//     }
//     return 0;
// }