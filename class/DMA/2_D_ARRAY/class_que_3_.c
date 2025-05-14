#include <stdio.h>
#include <stdlib.h>
struct node
{
    int a;
    struct node *add;
};
int main()
{
    struct node n1, n2, n3;
    int *m1 = &n1;
    int *m2 = &n2;
    int *m3 = &n3;
    m1 = (int *)malloc(sizeof(int) * 2);
    m2 = (int *)malloc(sizeof(int) * 3);
    m3 = (int *)malloc(sizeof(int) * 4);
    printf("enter the value: ");
    scanf("%d", &n1.a);
    n1.add = m2;
    printf("enter the value: ");
    scanf("%d", &n2.a);
    n2.add = m3;
    printf("enter the value: ");
    scanf("%d", &n3.a);
    n3.add = NULL;
    // int *ptr = m1;
    struct node *start;
    start = m1;
    while (start!=NULL)
    {
        printf("%d -> ",start->a);
        start=start->add;
    }
    

    return 0;
}