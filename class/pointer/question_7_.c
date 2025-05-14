#include<stdio.h>
void toput(int *p1,int n){
    for(int i =0 ;i< n;i++){
        printf("enter the %d element: ",i+1);
        scanf("%d",&p1[i]);
    }
}
int toget(int *p1,int n,int find){
    for(int i= 0;i<n;i++){
        if (p1[i]==find)
        {
            return i;
        }
    }
    return 0;
}
int main (){
    int n,find;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    printf("enter the number you want to find : ");
    scanf("%d",&find);
    int arr[n];
    int *p1 = arr;
    toput(p1,n);
    int place = toget(p1,n,find);
    printf("%d is found in %d index",find,place);
    return 0;
}