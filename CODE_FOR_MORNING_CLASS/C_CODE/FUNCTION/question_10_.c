#include<stdio.h>
void table(int a);
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    table(number);
    return 0;
}
void table(int a){
    int number1=1;
    while(number1<=10){
        printf("%d * %d = %d/n",a,number1,a*number1);
        number1++;
    }
}