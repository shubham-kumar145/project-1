#include<stdio.h>
int max(int *p1,int *p2){
    if(*p1>*p2){
        return *p1;
    }
    else{
        return *p2;
    }
}
int main(){
    int a,b;
    printf("enter the two number ");
    scanf("%d%d",&a,&b);
    int *p1=&a;
    int *p2=&b;
    int max_num = max(p1,p2);
    printf("maximum number among two number is : = %d",max_num);
    return 0;
}