#include<stdio.h>
int minus(int a,int b);
int main(){
    int sub;
    sub=minus(45,15);
    printf("subtraction = %d",sub);
    return 0;
}
int minus(int a,int b){
    int sub=a-b;
    return sub;
}
