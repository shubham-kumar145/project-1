#include<stdio.h>
void swap(int *p1,int *p2){
    int t =*p1;
    *p1=*p2;
    *p2=t;
}
int main(){
    int a,b;
    printf("enter the two number ");
    scanf("%d%d",&a,&b);
    int *p1=&a;
    int *p2=&b;
    swap(p1,p2);
    printf("after swaping the number: %d and %d ",a,b);
    return 0;
}