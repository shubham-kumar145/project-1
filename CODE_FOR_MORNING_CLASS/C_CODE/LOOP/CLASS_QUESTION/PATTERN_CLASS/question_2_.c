#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    for(int i=2;i<number;i++){
        for(int j=0;j<number;j++){
            if(j%2==0){
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