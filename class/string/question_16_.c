// #include<stdio.h>
// #include<string.h>
// int main(){
//     char st[30];
//     fgets(st,30,stdin);
//     int n = strlen(st);
//     for(int i =0;i<n-1;i++){
//         if(st[i]==' '){
//             st[i]='\n';
//         }
//     }
//     puts(st);
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main(){
    char st[30];
    // fgets(st,30,stdin);
    gets(st[]);
    int n = strlen(st);
    int i =0;
    while(st[i]!='\0'){
        while(st[i] != ' '){
            printf("%C",st[i]);
            i++;
        }
        i++;
        printf("\n");
    }
    // puts(st);
    return 0;
}
