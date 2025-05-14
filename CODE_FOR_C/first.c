#include <stdio.h>
int main(){
    int n = 16;
    int a=1;
    for (int i=1;i<=n;i++){
        a=a*i;
    }
    printf("%d",a);
    return 0;
}