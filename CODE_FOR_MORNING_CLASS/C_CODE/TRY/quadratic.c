#include<stdio.h>
#include<math.h>
int main(){
    int num1,num2,num3,d,di,root1,root2;
    printf("enter the value for X^2: ");
    scanf("%d",&num1);
    printf("enter the value for X: ");
    scanf("%d",&num2);
    printf("enter the value for constant: ");
    scanf("%d",&num3);
    d = ((num2*num2)-(4*num1*num3));  // discriminant
    di = pow(d,.5);                   // root of discriminant
    if(d > 0){
        root1=(-num2 + di)/(2*num1);
        root2=(-num2 - di)/(2*num1);
    }
    else if (d < 0)
    {
    //     root1=(-num2 + di)/(2*num1);
    //     root2=(-num2 - di)/(2*num1);
        printf("complex root");
    }
    else if (d == 0)
    {
        root1=((-num2 )/(2*num1));
        root2=((-num2 )/(2*num1));
    }
    printf("root of the quadratic equation is %d and %d :",root1,root2);
    return 0;
}