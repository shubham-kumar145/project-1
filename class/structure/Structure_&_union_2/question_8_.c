#include<stdio.h>
struct person {
    char name[20];
    int age;
    char address[30];
};
void input(struct person s[],int n){
    for (int  i = 0; i < n; i++)
    {
        printf("name: ");
        getchar();
        gets(s[i].name);
        printf("age: ");
        scanf("%d",&s[i].age);
        printf("address: ");
        getchar();
        gets(s[i].address);
    }
}
void output(struct person s[],int n){
    int oldest = 0,youngest = __INT_MAX__,n1=0,n2=0;
    for (int  i = 0; i < n; i++)
    {
        if(oldest < s[i].age){
            oldest = s[i].age;
            n1=i;
        }
        if(youngest > s[i].age){
            youngest = s[i].age;
            n2=i;
        }
    }
    printf("oldest person %s , age %d \n",s[n1].name,s[n1].age);
    printf("youngest person %s , age %d \n",s[n2].name,s[n2].age);
}
int main(){
    int m; 
    printf("enter the number person: ");
    scanf("%d",&m);
    struct person s[m];
    input(s,m);
    output(s,m);
    return 0;
}