#include<stdio.h>
struct node{
    int data;
    struct node *add;
};
int main(){
    struct node name1,name2,name3;
    printf("value for name 1: ");
    scanf("%d",&name1.data);
    name1.add=&name2;
    printf("value for name 2: ");
    scanf("%d",&name2.data);
    name2.add=&name3;
    printf("value for name 3: ");
    scanf("%d",&name3.data);
    name3.add=NULL;
    struct node *n1;
    n1= &name1;
    while(n1){
        printf("%d   ",n1->data);
        n1=n1->add;
    }
    return 0;
}