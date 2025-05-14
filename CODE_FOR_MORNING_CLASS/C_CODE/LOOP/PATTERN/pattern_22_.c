#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for(int i =1;i<=number;i++){
        for(int j=i;j<=number;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}