#include<stdio.h>
int main (){
    int num1,num2=0,t_even=0,t_odd=0;
    printf("enter the number: ");
    scanf("%d",&num1);
    printf("even number: \n");
    while(num2<=num1){
        if((num2%2)==0){
            printf("%d\n",num2);
            t_even+=num2;
        }
        num2++;
    }
    printf("total sum of even number: %d\n", t_even);
    num2=0;
    printf("odd number: \n");
    while(num2<=num1){
        if((num2%2)!=0){
            printf("%d\n",num2);
            t_odd+=num2;
        }
        num2++;
    }
    printf("total sum of odd number: %d\n", t_odd);
    return 0;
}