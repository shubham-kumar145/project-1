// #include <stdio.h>
// int main()
// {
//     FILE *ptr;
//     ptr = fopen("example.txt", "r");
//     char str[50];
//     int char_no = 0, word = 1, line = 0, count = 0;
//     while (fgets(str, 50, ptr))
//     {
//         line++;
//         count = 0;
//         while (str[count])
//         {
//             if (str[count] != ' ' && str[count] != '\n')
//             {
//                 char_no++;
//             }
//             else
//             {
//                 word++;
//             }
//             count++;
//         }
//     }
//     printf("no of line = %d\nno of words = %d\nno of charcter = %d", line, word, char_no);
//     fclose(ptr);
//     return 0;
// }

#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("example.txt", "r");
    char c;
    char prev = ' ';
    int char_no = 0, word = 0, line = 1;
    while ((c = fgetc(ptr)) != EOF)
    {
        if (c != ' ' && c != '\n')
        {
            char_no++;
        }

        else if (((prev != ' ') && (c == ' ' || c == '\n')))
        {
            word++;
        }
        if (c == '\n')
        {
            line++;
        }
        prev = c;
    }
    printf("no of line = %d\nno of words = %d\nno of charcter = %d", line, word, char_no);
    fclose(ptr);
    return 0;
}