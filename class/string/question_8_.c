#include <stdio.h>
#include <string.h>

int main()
{
    char name1[20];
    int count = 0;
    fgets(name1, 20, stdin);
    for(int i = 0;i<strlen(name1);i++){
        for(int j=0;j<strlen(name1);j++){
            if(name1[i]==name1[j]){
                count++;
            }
        }
        if(count>1){
            printf(" the Repeated character in a string = %c",name1[i]);
            break;
        }
    }
    return 0;
}