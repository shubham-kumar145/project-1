#include <stdio.h>
struct student
{
    int id;
    char name[20];
    float marks;
}s1 = {1,"wefwe",43.3};

int main()
{
    FILE *ptr;
    ptr = fopen("binary.bin", "wb");
    char str[20]="coding age";
    fwprintf(&s1,sizeof(s1),1,ptr);
    fclose(ptr);
    return 0;
}