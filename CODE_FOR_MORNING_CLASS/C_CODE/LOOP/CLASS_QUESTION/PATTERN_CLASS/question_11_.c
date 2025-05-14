#include <stdio.h>
int main()
{
    int number;
    printf("enter the number: ");
    scanf("%d", &number);
    for(int i=number;i>0;i--){
        for(int j=1;j<=number;j++){
            if(j<i){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    for(int i=2;i<=number;i++){
        for(int j=1;j<=number;j++){
            if(j<i){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}