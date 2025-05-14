#include<stdio.h>
#include<string.h>
struct rectancle{
    int length;
    int breath;
};
struct rectancle input(){
    struct rectancle s1;
    printf("length: ");
    scanf("%d",&s1.length);
    printf("breath: ");
    scanf("%d",&s1.breath);
    return s1;
}
void output(){
    struct rectancle s1;
    printf("area of the rectangle is %d",s1.breath*s1.length);
}
int main(){
    typedef struct rectancle area;
    area s2 = input();
    output();
    return 0;
}