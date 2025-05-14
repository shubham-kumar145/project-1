// #include <stdio.h>
// #include <string.h>
// struct employee
// {
//     char name[20];
//     int id;
//     float salary;
// };
// struct employee input(struct )
// {
//     struct employee s;
//     printf("name: ");
//     getchar();
//     gets(s.name);
//     printf("ID: ");
//     scanf("%d", &s.id);
//     printf("SALARY: ");
//     scanf("%f", &s.salary);
//     return s;
// }
// void output(int n, int size)
// {
//     struct employee s[size];
//     printf("\nEmployee %d: Name: %s , ID : %d , Salary : %f ", n + 1, s[n].name, s[n].id, s[n].salary);
// }
// int main()
// {
//     // typedef struct employee s;
//     int n;
//     struct employee s[n];
//     printf("enter the number of employee: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         s[i] = input(s[i]);
//         // struct employee s[i] = input();
//     }
//     printf("empolyee details: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nEmployee %d: Name: %s , ID : %d , Salary : %f ", i + 1, s[i].name, s[i].id, s[i].salary);
//         // output(i,n);
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>
struct employee
{
    char name[20];
    int id;
    float salary;
};
int main()
{
    int n;
    printf("enter the number of employee: ");
    scanf("%d", &n);
    struct employee s[n];
    for (int i = 0; i < n; i++)
    {
        printf("name: ");
        getchar();
        gets(s[i].name);
        printf("ID: ");
        scanf("%d", &s[i].id);
        printf("SALARY: ");
        scanf("%f", &s[i].salary);
    }
    printf("empolyee details: ");
    for (int i = 0; i < n; i++)
    {
        printf("\nEmployee %d: Name: %s , ID : %d , Salary : %f ", i + 1, s[i].name, s[i].id, s[i].salary);
    }

    return 0;
}