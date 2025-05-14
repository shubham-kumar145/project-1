#include <stdio.h>
#include <stdlib.h>
struct node
{
    int add;
    struct node *next;
};
// void add(struct node *n[],int i){
//     // struct node *n[i];
//     printf("enter the value: ");
//     scanf("%d",&n[i]->add);
//     n[i-1]->next=n[i];
// }
// void display(struct node n[]){
//     struct node *start;
//     start = &n[0];
//     while (start!=NULL)
//     {
//         printf("%d -> ",start->add);
//         start=start->next;
//     }
// }
int main()
{
    int a = 1, count = 0;
    int *arr;
    arr = (int *)malloc(sizeof(int) * count);
    while (a)
    {
        printf("enter the options you want to perform");
        printf("1. add");
        printf("2. display");
        printf("3. exit");
        int n;
        scanf("%d", &n);
        if (n == 1)
        {
            struct node arr[count] ;
            count++;
            arr = (int *)realloc(arr, count);
            int n;
            printf("enteer the value: ");
            scanf("%d",&arr[count].add);
            
            
        }
        else if (n == 2)
        {
        }
        else
        {
            a = 0;
        }
    }
    return 0;
}