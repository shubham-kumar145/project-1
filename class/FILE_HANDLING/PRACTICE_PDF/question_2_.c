#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("example.txt","r");
    if(ptr == NULL){
        printf("file not exit: ");
    }
    else{
        char str[30];
        fgets(str,30,ptr);
        printf("%s",str);
    }
    fclose(ptr);
    return 0;
}