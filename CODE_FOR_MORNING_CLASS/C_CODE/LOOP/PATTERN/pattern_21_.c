#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for(int i =number;i>0;i--){
        for(int j=i;j>0;j--){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}