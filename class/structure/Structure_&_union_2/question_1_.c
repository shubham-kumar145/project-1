#include<stdio.h>
struct student{
    char name[20];
    int age;
    float percentage;
};
int main(){
    struct student s;
    printf("enter the details of the student: \n");
    printf("name: ");
    gets(s.name);
    printf("age: ");
    scanf("%d",&s.age);
    printf("percentage: ");
    scanf("%f",&s.percentage);
    printf("STUDENT DETAILS\n");
    printf("NAME : %s \nAGE: %d \nPERCENTAGE: %f",s.name,s.age,s.percentage);
    return 0;
}