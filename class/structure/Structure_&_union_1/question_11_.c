#include <stdio.h>
struct student
{
    char name[20];
    int marks[5];
};
struct student input(){
    struct student s;
    printf("enter the name of the student: ");
    getchar();
    gets(s.name);
    printf("enter the marks: ");
    for (int  i = 0; i < 5; i++)
    {
        // getchar();
        printf("|nadsa|\n");
        scanf("%d",&s.marks[i]);
    }
    return s;

}
void output(struct student s1[], int n)
{
    // struct student s2[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d : Name : %s ,marks : ", i + 1, s1[i].name);
        for (int j = 0; j < 5; j++)
        {
            printf("%d  ", s1[i].marks[j]);
        }
    }
}
int main()
{
    int t_std;
    printf("enter the total number of student: ");
    scanf("%d", &t_std);
    struct student s1[t_std];
    for (int i = 0; i < t_std; i++)
    {
        s1[i]=input();
    }
    output(s1,t_std);
    return 0;
}