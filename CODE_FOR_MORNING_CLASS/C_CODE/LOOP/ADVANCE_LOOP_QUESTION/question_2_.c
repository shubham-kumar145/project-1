#include<stdio.h>
int main(){
    int num1,max=0,min=9999999,num2=1;
    float avg,sum=0;
    while(num2<=10){
        printf("enter the %d number: ",num2);
        scanf("%d",&num1);
        sum = sum+num1;
        if(max<=num1){
            max=num1;
        }
        if(min>=num1){
            min=num1;
        }
        num2++;
    }
    avg=sum/10;
    printf("average = %.2f \n",avg);
    printf("maximun = %d \n",max);
    printf("minimun = %d \n",min);
    return 0;
}