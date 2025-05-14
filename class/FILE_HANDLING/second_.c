#include<stdio.h>
int main(){
    FILE *ptr = fopen("second.txt","w");
    fputc('H',ptr);
    fclose(ptr);
    // printf("sfdsef\n");
    FILE*ptr1 = fopen("second.txt","r");
    char a = fgetc(ptr1);
    printf("%c",a);
    fclose(ptr1);
    return 0;
}