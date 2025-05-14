#include <stdio.h>
int main()
{
    char name1[20];
    int count =0;
    fgets(name1, 20, stdin);
    while(name1[count]){
        printf("%c ",name1[count]);
        count++;
    }
    return 0;
}