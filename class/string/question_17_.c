#include<stdio.h>
int main(){
    int n;
    printf("enter the total number of name you want to enter : ");
    scanf("%d",&n);
    char name[n][50];
    int count=0;
    for(int i =0;i<=n;i++){
        fgets(name[i],50,stdin);
    }
    for(int i =0;;i++){
        // if(name[])
        puts(name[i]);
    }
}