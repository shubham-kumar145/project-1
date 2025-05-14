#include<stdio.h>
int sum(int *p1,int *p2){
    return *p1+*p2;
}
int main(){
    int a,b;
    printf("enter the two number ");
    scanf("%d%d",&a,&b);
    int *p1=&a;
    int *p2=&b;
    int addtions = sum(p1,p2);
    printf("sum of two number is : = %d",addtions);
    return 0;
}