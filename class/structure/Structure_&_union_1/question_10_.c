#include<stdio.h>
struct product{
    int ID;
    char name[20];
    union money{
        float price;
        float discountPrice;
    }cost;
};
int main(){
    struct product s1;
    printf("enter the product id: ");
    scanf("%d",&s1.ID);
    printf("enter the product name: ");
    getchar();
    gets(s1.name);
    printf("enter the price of the :");
    scanf("%f",&s1.cost.price);
    printf("enter the discount price: ");
    scanf("%f",&s1.cost.discountPrice);
    printf("product details: \n");
    printf("ID : %d\n",s1.ID);
    printf("Name : %s\n",s1.name);
    printf("price : %f\n",s1.cost.price);
    printf("discount price : %f\n",s1.cost.discountPrice);
    return 0;
}