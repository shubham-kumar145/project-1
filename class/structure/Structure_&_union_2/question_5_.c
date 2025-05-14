#include<stdio.h>
struct student{
    char name[20];
    int roll_no;
    float marks;
};
void inputStudents(struct student students[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("NAME: ");
        getchar();
        gets(students[i].name);
        printf("ROLL NO : ");
        scanf("%d",&students[i].roll_no);
        printf("MARKS: ");
        scanf("%f",&students[i].marks);
    }
}
void displayStudents(struct student students[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d NAME : %s , ROLL NO : %d , MARKS : %.2f",i+1,students[i].name,students[i].roll_no,students[i].marks);
    }
}
int main(){
    int n;
    printf("enter the total number of student: ");
    scanf("%d",&n);
    struct student s[n];
    inputStudents(s,n);
    displayStudents(s,n);
    return 0;
}