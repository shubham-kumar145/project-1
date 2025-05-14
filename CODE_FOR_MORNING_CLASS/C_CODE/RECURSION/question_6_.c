#include<stdio.h>
int count(int a);
int main(){
    int num1;
    printf("enter the number: ");
    scanf("%d",&num1);
    int num2 = count(num1);
    printf("digit count : %d",num2);
    return 0;
}
int count(int a){
    if(a<=9){
        return 1;
    }
    a=a/10;
    int coun = 1 + count(a);
    return coun;
}