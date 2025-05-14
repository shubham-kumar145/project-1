/*8.Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer, calculate percentage and grade according to given
conditions:
If percentage >= 90% : Grade A
If percentage >= 80% : Grade B
If percentage >= 70% : Grade C
If percentage >= 60% : Grade D
If percentage >= 40% : Grade E
If percentage < 40% : Grade F
*/
#include<stdio.h>
int main(){
    int  Physics, Chemistry, Biology,Mathematics,Computer,t_marks;
    float percentage;
    printf("enter the marks of Physics ");
    scanf("%d",&Physics);
    printf("enter the marks of Chemistry ");
    scanf("%d",&Chemistry);
    printf("enter the marks of Biology ");
    scanf("%d",&Biology);
    printf("enter the marks of Mathematics ");
    scanf("%d",&Mathematics);
    printf("enter the marks of Computer ");
    scanf("%d",&Computer);
    t_marks=Physics+Chemistry+Biology+Mathematics+Computer;
    percentage=t_marks/5;
    printf("\ntotal mark: %d\npercentage: %.2f \n",t_marks,percentage);
    if ((percentage>=90)&&(percentage<=100))
    {
        printf("your grade is: A");
    }
    else if (percentage>=80)
    {
        printf("your grade is: B");
    }
    else if (percentage>=70)
    {
        printf("your grade is: C");
    }
    else if (percentage>=60)
    {
        printf("your grade is: D");
    }
    else if (percentage>=40)
    {
        printf("your grade is: E");
    }
    else
    {
        printf("your grade is: F");
    }
    return 0;
}