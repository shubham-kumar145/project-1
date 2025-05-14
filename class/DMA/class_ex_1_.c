#include<stdio.h>
#include<stdlib.h>
int main(){
    int* p;
    p = (int*)malloc(sizeof(int));
    *p = 55;
    printf("\n%d\n",*p);
    return 0;
}