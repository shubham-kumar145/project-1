#include<stdio.h>
int main(){
    int number;
    printf("enter the number till you want to print: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        printf("%d ",i);
    }
    return 0;
}