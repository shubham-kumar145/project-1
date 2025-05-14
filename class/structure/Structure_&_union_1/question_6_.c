#include <stdio.h>
#include <string.h>
struct employee
{
    char name[20];
    int id;
    float salary;
};
struct employee input(){
    struct employee s1;
    printf("name: ");
    getchar();
    gets(s1.name);
    printf("ID no: ");
    scanf("%d",&s1.id);
    printf("salary: ");
    scanf("%f",&s1.salary);
    return s1;
}
void output(struct employee s2[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("\nemployee : %d , name : %s , id_no : %d , salary : %f ",i+1,s2[i].name,s2[i].id,s2[i].salary);
    }
    
}
int main()
{
    int n;
    printf("enter the number of employee: ");
    scanf("%d", &n);
    struct employee s[n];
    for (int i = 0; i < n; i++)
    {
        s[i] = input();
    }
    output(s,n);
    return 0;
}