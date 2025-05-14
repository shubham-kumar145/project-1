/*
4. Write a C program to implement a state machine that controls the traffic lights using
switch statement. The state machine should have three states: Red, Green and Yellow,
and the transition from one state to another should follow the standard traffic rules.
*/
#include <stdio.h>
int main()
{
    char ch;
    printf("list of traffic list\n ");
    printf("'R' for RED \n ");
    printf("'Y' for YELLOW\n ");
    printf("'G' for GREEN \n");
    printf(" ************************* \n");
    printf("enter your choise: ");
    scanf("%c", &ch);
    // if ((ch >= 'a') && (ch <= 'z'))
    // {
    //     ch -= 32;
    // }
    switch (ch)
    {
    case 'R':
    case 'r':
        printf(" IT's RED LIGHT\n STOP YOUR VEHICLE\n");
        break;
    case 'Y':
    case 'y':
        printf(" IT's YELLOW LIGHT \n START YOUR VEHICLE\n");
        break;
    case 'G':
    case 'g':
        printf(" IT's GREEN LIGHT \n YOU CAN GO NOW\n");
        break;
    default:
        printf("you enter invalid input");
        break;
    }
}