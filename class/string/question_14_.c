// 14.Write a program to input any string from user and remove first
//  occurrence of a given word from string.
#include<stdio.h>
#include<string.h>
int main(){
    char st[50];
    char st1[50];
    fgets(st,50,stdin);
    int count =0,n=strlen(st),j=0;
    for(int i =0;i<n-1;j++,i++){
        st1[i]=st[i];
        if(st[i]==' '){
            while (st[i])
            {
                st[count]=st[i];
                count++;
                i++;
            }
            break;
        }
    }
    st[count]='\0';
    st1[j]='\0';
    puts(st);
    printf("removed part: ");
    puts(st1);
    return 0;
}