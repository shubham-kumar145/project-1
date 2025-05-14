#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for(int i=0,k=0;i<number;i++){
        for(int j=0;j<number;j++,k++){
            if(k%2==0){
                printf("* ");
            }
            else{
                printf("# ");
            }
        }
        printf("\n");
    }
    return 0;
}