#include<stdio.h>
int rem(int a);
int fact(int a);
void strong(int a,int b);
int main(){
    int number,number2,remainder,factorial,stron=0;
    printf("enter the number: ");
    scanf("%d",&number);
    number2=number;
    while(number>0){
        remainder=rem(number);
        number=number/10;
        factorial=fact(remainder);
        stron=stron+factorial;
    }
    strong(number2,stron);
    return 0;
}
int rem(int a){
    return a%10;
}
int fact(int a){
    int factorial=1;
    while(a>1){
        factorial=factorial*a;
        a--;
    }
    return factorial;
}
void strong(int a ,int b){
    if(a==b){
        printf(" yes it is a strong number");
    }
    else{
        printf(" No it is not a strong number");
    }
}