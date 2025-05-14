#include<stdio.h>
union vehicle
{
    char CarModel[20];
    char BikeModel[20];
    char TruckModel[20];
};
int main(){
    union vehicle n1;
    printf("enter the model name for various vehicle: \n");
    printf("enter the car model name: ");
    getchar();
    gets(n1.CarModel);
    printf("car model: %s ",n1.CarModel);
    printf("\nenter the bike model name: ");
    getchar();
    gets(n1.BikeModel);
    printf("bike model: %s ",n1.BikeModel);
    printf("\nenter the truck model name: ");
    getchar();
    gets(n1.TruckModel);
    printf("truck model: %s ",n1.TruckModel);
    return 0;
}
