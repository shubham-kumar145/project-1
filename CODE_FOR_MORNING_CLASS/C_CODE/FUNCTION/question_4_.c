#include<stdio.h>
int multi(int a,int b);
int main(){
    int product;
    product=multi(150,2);
    printf("multiplication  =  %d",product);
    return 0;
}
int multi(int a,int b){
    int product=a*b;
    return product;
}