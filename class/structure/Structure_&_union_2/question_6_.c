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
void arrange(struct student students[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(students[j].marks < students[j+1].marks){
                struct student s = students[j];
                students[j] = students[j+1];
                students[j+1] = s;
            }
        }   
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
    arrange(s,n);
    displayStudents(s,n);
    return 0;
}