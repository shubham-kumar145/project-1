#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("example.txt","a");
    char str[20];
    gets(str);
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}