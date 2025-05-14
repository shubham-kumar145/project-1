#include<stdio.h>
int main(){
    int num1,mult=1;
    printf("enter the number");
    scanf("%d",&num1);
    while(mult<11){
        printf("%d * %d = %d\n",num1,mult,(num1*mult));
        mult++;
    }
    return 0;
}