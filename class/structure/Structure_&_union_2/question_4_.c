#include <stdio.h>
struct student
{
    char name[20];
    int roll_no;
    int marks[5];
};
struct student input()
{
    struct student s;
    printf("name: ");
    getchar();
    gets(s.name);
    printf("roll no : ");
    scanf("%d", &s.roll_no);
    printf(" marks: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&s.marks[i]);
    }
    return s;
}
int total(struct student s1)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + s1.marks[i];
    }
    return sum;
}
int avg(int total1)
{
    return total1/5;
}
int highest()
{
    struct student s1;
    int high=0;
    for (int i = 0; i < 5; i++)
    {
        if(high < s1.marks[i]){
            high = s1.marks[i];
        }
    }
    return high;
}
void output(int t,float a,int h){
    printf("total marks : %d\naverage marks: %f\nhighest marks : %d",t,a,h);
}
int main(){
    struct student s;
    s=input();
    int total1=total(s);
    float avg1=avg(total1);
    int high = highest();
    output(total1,avg1,high);
}