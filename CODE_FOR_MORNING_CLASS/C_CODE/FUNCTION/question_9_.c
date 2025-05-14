#include<stdio.h>
void prime();
int main(){
    prime();
    return 0;
}
void prime(){
    int number,number1=2;
    printf("enter the number: ");
    scanf("%d",&number);
    while(number1<number){
        if(number%number1==0){
            printf("no, it is not a prime number: ");
            break;
        }
        else if(number1>number/2){
            printf("yes it is prime number: ");
            break;
        }
        else{
            number1++;
            continue;
        }
    }
}