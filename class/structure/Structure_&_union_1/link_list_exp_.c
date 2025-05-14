#include<stdio.h>
#include<string.h>
struct node
{
    int a ;
    struct node *n;
}shivan,anuj,ravi,deepak;

int main(){
    anuj.a =1 ;
    anuj.n=NULL;
    ravi.a=2;
    anuj.n=&ravi;
    ravi.n=NULL;
    shivan.a=3;
    ravi.n=&shivan;
    shivan.n=NULL;
    deepak.a=4;
    shivan.n=&deepak;
    deepak.n=NULL;

    struct node *start;
    start = &anuj;
        // printf("%d -> ",start->a);
    while (start!=NULL)
    {
        printf("%d -> ",start->a);
        start=start->n;
    }
    

    return 0;
}