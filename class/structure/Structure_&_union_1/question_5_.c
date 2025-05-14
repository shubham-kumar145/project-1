#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int roll;
    float mark;
};
int main()
{
    int n;
    printf("enter the number of student: ");
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("name: ");
        getchar();
        gets(s[i].name);
        printf("roll no : ");
        scanf("%d", &s[i].roll);
        printf("marks: ");
        scanf("%f", &s[i].mark);
    }
    printf("student details: ");
    for (int i = 0; i < n; i++)
    {
        printf("\nstudent %d: Name: %s , roll no : %d , marks : %f ", i + 1, s[i].name, s[i].roll, s[i].mark);
    }

    return 0;
}