#include <stdio.h>
int main()
{
    char name[20];
    int count =0;
    fgets(name, 20, stdin);
    while(name[count]){
        count++;
    }
    printf("size of the string : - %d ", count-1);
    return 0;
}