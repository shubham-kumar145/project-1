// count the uppercase,lowercase,digit and symbol3
#include<iostream>
using namespace std;
int main(){
    string ch;
    int uppercase=0,lowercase=0,digit=0,symbols=0,vowel=0;
    cout << "\nenter the value: ";
    getline(cin,ch);
    for (int i=0;i<ch.size();i++){
        if ((ch[i]>='a')&&(ch[i]<='z')){
            lowercase++;
            if((ch[i]=='a')||(ch[i]=='e')||(ch[i]=='i')||(ch[i]=='o')||(ch[i]=='u')){
                vowel++;
            }
            }
        else if ((ch[i]>='A')&&(ch[i]<='Z')){
            uppercase++;
            if((ch[i]=='A')||(ch[i]=='E')||(ch[i]=='I')||(ch[i]=='O')||(ch[i]=='U')){
                vowel++;
            }
        }
        else if ((ch[i]>='0')&&(ch[i]<='9')){
            digit++;
        }
        else
        {
            symbols++;
        }  
    }
    cout <<"\ntotal lowercase = "<<lowercase<<endl<<
    "total uppercase = "<<uppercase<<endl<<
    "total digits = "<<digit<<endl<<
    "total symbols = "<<symbols<<endl<<
    "total vowel = "<< vowel<<endl;
     
    return 0;
}