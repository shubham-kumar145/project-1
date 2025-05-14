#include<stdio.h>
void fibonacci(int a,int b);
int main(){
    int num1,num2;
    printf("enter the first number: ");
    scanf("%d",&num1);
    printf("enter the second number: ");
    scanf("%d",&num2);
    fibonacci(num1,num2);
    return 0;
}
void fibonacci(int a,int b){
    int temp1=1,temp2,sum=0;
    while(sum <= b){
        temp2=sum;
        if(sum>=a){
            printf("%d ",sum);
        }
        sum=sum+temp1;
        temp1=temp2;
    }
}