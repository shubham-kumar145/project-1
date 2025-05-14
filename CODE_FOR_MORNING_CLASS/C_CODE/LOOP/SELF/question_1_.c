#include<stdio.h>
int main(){
    int size,num;
    printf("enter the size :");
    scanf("%d",&size);
    while(size > 0){
        printf("enter the element: ");
        scanf("%d",&num);
        if(num == 1 || num == 0){
            size--;
        }
        else{
            printf("again ");
        };
    }
    return 0;
}