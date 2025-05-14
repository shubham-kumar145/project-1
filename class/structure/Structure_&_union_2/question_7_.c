#include <stdio.h>
struct Employee
{
    char name[20];
    int id;
    float salary;
};
struct Employee input()
{
    struct Employee s;
    printf("NAME: ");
    getchar();
    gets(s.name);
    printf("ID: ");
    scanf("%d",&s.id);
    printf("SALARY: ");
    scanf("%f",&s.salary);
    return s;
}
void output(struct Employee s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (s[i].salary > 50000)
        {
             printf("Employee : %d NAME : %s , ID : %d , SALARY : %f \n", i + 1, s[i].name, s[i].id, s[i].salary);
        }
    }
}
int main(){
    int n;
    printf("enter the number of employee: ");
    scanf("%d",&n);
    struct Employee s[n];
    for (int i = 0; i < n; i++)
    {
        s[i] = input();
    }
    output(s,n);
    return 0;
}