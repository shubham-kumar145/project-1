#include<stdio.h>
int main(){
    FILE *ptr = fopen("string.txt","w");
    fputs("Coding Age",ptr);
    fclose(ptr);
    FILE *ptr = fopen("string.txt","r");
    char str[30];
    fgets(str,30,ptr);
    puts(str);
    return 0;
}