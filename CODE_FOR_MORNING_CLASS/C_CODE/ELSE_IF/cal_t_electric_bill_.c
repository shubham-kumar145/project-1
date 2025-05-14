/*
10.Write a C program to input electricity unit charge and calculate the total electricity bill
according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/
#include <stdio.h>
int main()
{
    float e_unit, e_charge;
    printf("enter the electric unit: ");
    scanf("%f", &e_unit);
    if (e_unit < 51)
    {
        e_charge = e_unit * .5;
    }
    else if (e_unit < 151)
    {
        e_charge = ((e_unit - 50) * .75) + (50 * .5);
    }
    else if (e_unit < 251)
    {
        e_charge = ((e_unit - 150) * 1.2) + (100 * .75) + (50 * .5);
    }
    else
    {
        e_charge = ((e_unit - 250) * 1.5) + (100 * 1.2) + (100 * .75) + (50 * .5);
    }
    printf("total electric charge: %.2f", (e_charge + (e_charge * .2)));
    return 0;
}