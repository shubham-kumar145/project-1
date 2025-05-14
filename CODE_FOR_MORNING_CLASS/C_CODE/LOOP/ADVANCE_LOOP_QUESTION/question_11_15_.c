#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for(int i=1,k=97;i<=number;i++){
        for(int j=1;j<=i;j++,k++){
            if(k%2==0){
                printf("%c ",k-32);
            }
            else{
                printf("%c ",k);
            }
        }
        printf("\n");
    }
}