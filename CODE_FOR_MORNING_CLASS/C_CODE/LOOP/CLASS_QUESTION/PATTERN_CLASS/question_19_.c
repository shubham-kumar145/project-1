#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for(int i =1,k=1;i<=number;k++,i++){
        for(int j =0 ;j<i;j++){
            printf("%d ",k+j);
        }
        printf("\n");
    }
    return 0;
}