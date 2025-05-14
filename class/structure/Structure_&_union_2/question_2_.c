#include <stdio.h>
struct rectangle
{
    int length;
    int breadth;
};
struct rectangle input()
{
    struct rectangle s;
    printf("enter the length: ");
    scanf("%d", &s.length);
    printf("enter the breadth: ");
    scanf("%d", &s.breadth);
    return s;
}
void output(int area, int parameter)
{
    printf("AREA : %d \nPERIMETER : %d", area, parameter);
}
int area()
{
    struct rectangle s;
    return s.length * s.breadth;
}
int perimeter()
{
    struct rectangle s;
    return 2 * (s.breadth + s.length);
}
int main()
{
    struct rectangle s;
    s = input();
    int area1 = area();
    int perimeter1 = perimeter();
    output(area1, perimeter1);
    return 0;
}