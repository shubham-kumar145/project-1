#include<stdio.h>
int main(){
    int a =23;
    int *add=&a;
    printf("%p   =   %p ",add,&a);
    return 0;
}