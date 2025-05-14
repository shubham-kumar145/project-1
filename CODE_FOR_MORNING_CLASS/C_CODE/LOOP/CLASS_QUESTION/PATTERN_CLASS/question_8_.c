#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for(int i=number,k=1;i>0;k++,i--){
        for(int j=1;j<i;j++){
            printf("  ");
        }
        for(int j = 1;j<=(2*k -1);j++){
            if(j%2!=0){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}