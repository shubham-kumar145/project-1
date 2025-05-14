#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("third.txt", "w");
    char c[20] = "sfwes fassc";
    int a = 12323;
    float d = 97.56;
    fprintf(ptr, "%d\n%f\n%s", a, d, c);
    fclose(ptr);
    ptr = fopen("third.txt", "r");
    int q;
    char w[20];
    float e;
    fscanf(ptr, "%d\n%f%s", &q,&e,w);
    printf(" %d \n %f \n %s\n", q, e,w);
    fscanf(ptr, "%s", w);
    printf("%s", w);
    fclose(ptr);
    return 0;
}