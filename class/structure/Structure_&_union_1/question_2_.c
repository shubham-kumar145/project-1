#include <stdio.h>
struct teacher
{
    char name[30];
    int age;
    float salary;
};
int main()
{
    int num;
    printf("enter the number of teacher");
    scanf("%d", &num);
    struct teacher list[num];
    for (int i = 0; i < num; i++)
    {
        getchar();
        printf("\nname : ");
        fgets(list[i].name, 30, stdin);
        // gets(list[i].name);
        printf("age :");
        scanf("%d", &list[i].age);
        printf("salary : ");
        scanf("%f", &list[i].salary);
    }
    printf("input over\n");
    printf("teachers Details: \n");
    for (int i = 0; i < num; i++)
    {
        printf("\nNAME: %s", list[i].name);
        printf("Age %d\n", list[i].age);
        printf("SALARY: %f\n", list[i].salary);
    }
    return 0;
}