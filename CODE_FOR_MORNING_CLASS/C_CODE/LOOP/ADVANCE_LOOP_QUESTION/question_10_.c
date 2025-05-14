#include<stdio.h>
int main(){
    int num1=1,num2,temp1,temp2,sum,count1,count2;
    while(num1>=0){
    printf("\nenter the number: ");
    scanf("%d",&num1);
    if(num1<0){
        break;
    }
    printf("%d is ",num1);
    num2=num1;
    count1=0;
    for(int i=2;i<num2/2;i++){
        if(num2%2==0){
            count1++;
        }
    }
    if(count1>0){
        printf("prime but ");
    }
    else{
        printf("not prime but ");
    }
    temp1=1;
    sum=0;
    count2=0;
    while(sum<=num1){
        temp2=sum;
        sum=sum+temp1;
        temp1=temp2;
        if(sum==num1){
            count2++;
        }
    }
    if(count2>0){
        printf("fibonacci ");
    }
    else{
        printf("not fibonacci ");
    }
    }
    printf("\n found negative number pls stop the Loop. ");
    return 0;
}