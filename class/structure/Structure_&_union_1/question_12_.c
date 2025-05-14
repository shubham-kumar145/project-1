#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node n1,n2,n3;
    printf("enter the value for  n1: ");
    scanf("%d",&n1.data);
    n1.next=&n2;
    printf("enter the value for  n2: ");
    scanf("%d",&n2.data);
    n2.next=&n3;
    printf("enter the value for  n3: ");
    scanf("%d",&n3.data);
    n3.next=NULL;
    struct node *sptr;
    sptr = &n1;
    while(sptr){
        printf("%d -> ",sptr->data);
        sptr = sptr->next;
    }
    printf("null");
    return 0;
}