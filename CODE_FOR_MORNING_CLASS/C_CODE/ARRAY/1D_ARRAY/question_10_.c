#include<stdio.h>
int main(){
    int size,even=0,odd=0,evencount=0,oddcount=0;
    float avgeven,avgodd;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the %d element of the array: ",i+1);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if(array[i]%2==0){
            even=even+array[i];
            evencount++;
        }
        else{
            odd=odd+array[i];
            oddcount++;
        }
    }
    avgeven=even/evencount;
    avgodd=odd/oddcount;
    printf("average of even element = %.2f\naverage of odd element = %.2f",avgeven,avgodd);
    return 0;
}