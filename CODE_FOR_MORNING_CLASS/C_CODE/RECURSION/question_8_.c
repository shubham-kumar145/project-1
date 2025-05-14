#include<stdio.h>
void fab(int a,int b,int c);
int main(){
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    printf("fibonacci = ");
    fab(num,1,0);
    return 0;
}
int sum =0;
void fab(int num,int temp1,int temp2){
    if(sum > num){
        return;
    }
    temp2=sum;
    printf("%d ",sum);
    sum = sum + temp1;
    temp1 = temp2;
    fab(num,temp1,temp2);
}