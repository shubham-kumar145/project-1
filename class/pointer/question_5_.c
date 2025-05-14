#include<stdio.h>
void toput(int *p1,int n){
    for(int i =0 ;i< n;i++){
        printf("enter the %d element: ",i+1);
        scanf("%d",&p1[i]);
    }
}
void toget(int *p1,int n){
    for(int i= 0;i<n;i++){
        printf("%d ",*(p1+i));
    }
}
int main (){
    int n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    int *p1 = arr;
    toput(p1,n);
    toget(p1,n);
    return 0;
}