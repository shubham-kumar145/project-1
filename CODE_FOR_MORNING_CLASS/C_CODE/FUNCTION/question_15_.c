#include<stdio.h>
void palindrome(int a);
void reverse(int a);
int main(){
    int num1;
    printf("enter the number: ");
    scanf("%d",&num1);
    reverse(num1);
    palindrome(num1);
    return 0;
}
void reverse(int a){
    int rem,rev=0;
    while(a>0){
        rem=a%10;
        a=a/10;
        rev=(rev*10)+rem;
    }
    printf("%d",rev);
}
void palindrome(int v){
    int rem1,rev1=0;
    int b=v;
    while(v>0){
        rem1=v%10;
        v=v/10;
        rev1=(rev1*10)+rem1;
    }
    if(rev1==b){
        printf(" yes it is a palindrome ");
    }
    else
    {
        printf(" no it is not a palindrome ");        
    }
}