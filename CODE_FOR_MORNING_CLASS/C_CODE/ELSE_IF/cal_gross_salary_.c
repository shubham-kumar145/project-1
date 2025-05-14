/*
9. Write a C program to input basic salary of an employee and calculate gross salary
according to given conditions.
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
Basic Salary >= 20001 : HRA = 30%, DA = 95%
*/
#include <stdio.h>
int main()
{
    float salary, gross_salary;
    printf("enter your basic salary: ");
    scanf("%f", &salary);
    if (salary <= 10000)
    {
        gross_salary = (salary + (salary * .2) + (salary * .8));
    }
    else if (salary <= 20000)
    {
        gross_salary = (salary + (salary * .25) + (salary * .9));
    }
    else
    {
        gross_salary = (salary + (salary * .3) + (salary * .95));
    }
    printf("your gross salary: %.2f", gross_salary);
    return 0;
}