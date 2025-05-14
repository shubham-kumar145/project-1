#include <stdio.h>
int main()
{
    int choice, price, quantity;
    printf("     list of itams\n");
    printf("1.  APPLE JUICE   - $30 \n");
    printf("2.  COCO COLA     - $40 \n");
    printf("3.  SPRITE        - $40 \n");
    printf("4.  REAL FRUIT    - $50 \n");
    printf("5.  COCONUT JUICE - $60 \n");
    printf("6.  LIMEADE       - $20 \n");
    printf("7.  PEPSI         - $60 \n");
    printf("8.  FANTA         - $60 \n");
    printf("9.  THUMS UP      - $70 \n");
    printf("10. LIMCA         - $50 \n");
    printf("11. APPY FIZZ     - $90 \n");
    printf("12. EXIT  \n");
    printf("*************************************************");
    printf("\nEnter the number corresponding to your choice: ");
    scanf("%d", &choice);
    printf("Enter the quantity: ");
    scanf("%d", &quantity);
    switch (choice)
    {
    case 1:
        price = 30;
        printf("HERE IS YOUR %d APPLE JUICE ", quantity);
        break;
    case 2:
        price = 40;
        printf("HERE IS YOUR %d COCO COLA ", quantity);
        break;
    case 3:
        price = 40;
        printf("HERE IS YOUR %d SPRITE ", quantity);
        break;
    case 4:
        price = 50;
        printf("HERE IS YOUR %d REAL FRUIT ", quantity);
        break;
    case 5:
        price = 60;
        printf("HERE IS YOUR %d COCONUT JUICE ", quantity);
        break;
    case 6:
        price = 20;
        printf("HERE IS YOUR %d LIMEADE ", quantity);
        break;
    case 7:
        price = 60;
        printf("HERE IS YOUR %d PEPSI ", quantity);
        break;
    case 8:
        price = 60;
        printf("HERE IS YOUR %d FANTA ", quantity);
        break;
    case 9:
        price = 70;
        printf("HERE IS YOUR %d THUMS UP ", quantity);
        break;
    case 10:
        price = 50;
        printf("HERE IS YOUR %d LIMCA ", quantity);
        break;
    case 11:
        price = 90;
        printf("HERE IS YOUR %d APPY FIZZ ", quantity);
        break;
    case 12:
        printf("\n***** THANK YOU FOR COMING :) *****\n");
        return 0;
    default:
        printf("ENTER CORRECT CHOICE");
        printf("\n\tTHANK YOU COMING :) ");
        return 0;
    }
    printf("\n************************************************");
    price = (price * quantity);
    printf("\nTOTAL COST : $ %d", price);
    printf("\n***** THANK YOU FOR COMING :) *****\n");
    return 0;
}