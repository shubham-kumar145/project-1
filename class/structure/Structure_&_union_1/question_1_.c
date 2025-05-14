#include<stdio.h>
#include<string.h>
struct student {
    char name[20];
    int roll;
    float marks;
};
struct student input(){
    struct student s;
    printf("NAME: ");
    gets(s.name);
    printf("ROLL NO: ");
    scanf("%d",&s.roll);
    printf("MARKS: ");
    scanf("%f",&s.marks);
    return s;
}
void output(){
    struct student s;
    printf("NAME: %s\n",s.name);
    printf("ROLL NO: %d\n",s.roll);
    printf("MARKS: %f\n",s.marks);
}
int main(){
    struct student s1 = input();
    output();
    return 0;
}