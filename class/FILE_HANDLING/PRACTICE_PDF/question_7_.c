#include<stdio.h>
#include<string.h>
int main(){
    FILE *ptr;
    ptr = fopen("example.txt","r");
    char str[50];
    char name[10];
    printf("enter the words");
    gets(name);
    int a= strlen(str);
    int b = strlen(name);
    printf("%d   %d  ",a,b);
    while(fgets(str,50,ptr)){}
    return 0;
}