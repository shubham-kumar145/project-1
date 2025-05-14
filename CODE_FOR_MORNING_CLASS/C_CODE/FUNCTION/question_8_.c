#include<stdio.h>
char oddeven(int a);
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    char ch = oddeven(number);
    if(ch == 'e'){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}
char oddeven(int a){
    if(a%2==0){
        return 'e';
    }
    else{
        return 'o';
    }
}