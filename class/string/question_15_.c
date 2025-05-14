// //  15.Write a program to find the number of times a given word 'the'
// //  appears in the given string.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char name[20], name1[50];
//     fgets(name1, 50, stdin);
//     fgets(name, 20, stdin);
//     int count = 0, sum = 0;
//     int n1 = strlen(name1);
//     int n = strlen(name);
//     for (int i = 0; i < n1-1;)
//     {
//         for (int j = 0; j < n-1; j++, i++)
//         {
//             printf("j == %d     n==%d    i==%d\n",j,n,i);
//             if (name[j] == name1[i])
//             {
//                 printf("name=%c     name1=%c \n",name[j],name1[i]);
//                 count++;
//             }
//             if (name1[i] == ' ')
//             {
//                 printf("value of i = %d\n",i);
//                 // j = 0;
//                 continue;
//             }
//             while(name1[i]!=' '){
//                 if(i > n1){
//                     break;
//                 }
//                 i++;
//                 printf("i = == = %d \n ",i);
//             }
//         }
//         if (count == n-1)
//         {
//             sum++;
//         }
//         count = 0;
//     }
//     printf("total time: %d ",sum);
//     return 0;
// }


#include<stdio.h>
int main(){
    
    return 0;
}