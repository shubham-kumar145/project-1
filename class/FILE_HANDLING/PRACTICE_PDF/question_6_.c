#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("example.txt","r");
    if(ptr == NULL){
        printf("file not exit");
    }
    else{
        fclose(ptr);
        remove("example.txt");
        printf("file removed succesfully");
    }
    return 0;
}