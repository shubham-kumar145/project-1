#include<bits/stdc++.h>
using namespace std;
void pattern1  (int n){
    for(int y = 0;y < n;y++){
        for(int t = 0;t < n;t++){
            cout << "*";
        }
    cout << endl;
    }
}
void pattern2  (int n){
    for (int i = 0; i < n;i++ ){
        for(int j=0;j<=i;j+=1){
            cout << "*";
            }
        cout << endl;
    }
}
void pattern31 (int n){
    for (int i = 1; i <= n;i++ ){
        for(int j=0;j<i;j+=1){
            for(int k=0;k<i;j++){
                cout << j+1<<" ";
                break;
            }
        }
    cout << endl;
    }
}
void pattern32 (int n){
    for (int i = 1; i <= n;i++ ){
        for(int j=1;j<=i;j++){
            cout << j<<" ";
        }
        cout << endl;
    }
}
void pattern4  (int n){
    for (int i = 1; i <= n;i++ ){
        for(int j=0;j<i;j++){
            cout << i<<" ";
        }
        cout << endl;
    }
}
void pattern5  (int n){
    for (int i = 1; i <= n;i++ ){
        for(int j=0;j<n-i+1;j++){
            cout << "*"<<" ";
            }
        cout << endl;
    }
}
void pattern6  (int n){
    for (int i = 1; i <= n;i++ ){
        for(int j=1;j<=n-i+1;j++){
            cout << j<<" ";
            }
        cout << endl;
    }
}
void pattern7  (int n){
	for (int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        for(int k=0;k<2*i-1;k++){
            cout << "*";
        }
        for(int l=0;l<n-i;l++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8  (int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int k=0;k<2*(n-i)-1;k++){
            cout << "*";
        }
        for(int l=0;l<i;l++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern9  (int n){
	for (int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        for(int k=0;k<2*i-1;k++){
            cout << "*";
        }
        for(int l=0;l<n-i;l++){
            cout << " ";
        }
        cout << endl;
    }
    for (int a=0;a<n;a++){
        for(int b=0;b<a;b++){
            cout << " ";
        }
        for(int c=0;c<2*(n-a)-1;c++){
            cout << "*";
        }
        for(int d=0;d<a;d++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern10 (int n){
	for (int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int a=1;a<=n-1;a++){
        for(int k=0;k<n-a;k++){
            cout << "*";
        }        
        cout << endl;
    }
}
void pattern11 (int n){
    int start = 1;
    for(int i=0;i<n;i++){
        if(i%2==0)start = 1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout << start;
            start = 1-start;
        }
        cout << endl;
    }
}
void pattern12 (int n){
    for (int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j<<" ";
        }
        for(int k = 1;k<=(n-i)*2;k++){
            cout << "  ";
        }
        for(int l =i;l>=1;l--){
            cout << l<<" ";
        }
        cout << endl;
    }
}
void pattern13 (int n){
    int k=1;
    for(int i =1;i<=n;i++){
        for (int j = 1;j<=i;j++){
            cout << k<<" ";
            k++;
        }
        cout << endl;
    }
}
void pattern14 (int n){
    for (int i=0;i<n;i++){
        for(char ch ='A';ch<='A'+i;ch++){
            cout << ch<<" ";
        }
        cout << endl;
    }
}        
void pattern15 (int n){
    for (int i=1;i<=n;i++){
        for(char ch ='A';ch<='A'+(n-i);ch++){
            cout << ch<<" ";
        }
        cout << endl;
    }
}        
void pattern16 (int n){
    for (int i=0;i<n;i++){
        char ch = 'A' +i;
        for(int j=0;j<=i;j++){
            cout << ch<<" ";
        }
        cout << endl;
    }
}
void pattern17 (int n){
    for (int i=1;i<=n;i++){
        for(int q =0;q<=n-i-1;q++){
            cout<<"  ";
        }
        char ch ='A';
        int breakpoint = (2*i-1)/2;
        for (int j=0;j<2*i-1;j++){
            cout << ch<<" ";
            if(j<breakpoint) ch++;
            else ch--;
        }
        cout << endl;
    }
}
void pattern181(int n){
    for(int i=1;i<=n;i++){
        for(char ch ='A'+n-1;ch>'A'+n-i-1;ch--){
            cout << ch;
        }
        cout << endl;
    }
    
}
void pattern182(int n){
    for(int i=1;i<=n;i++){
        for(char ch ='A'+n-i;ch>'A'+n-i-1;ch--){
            char s=ch;
            for(int j=0;j<i;j++){
                cout << s;
                s++;
            }
        }
        cout << endl;
    }
    
}
void pattern19 (int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        for(int k=0;k<2*i;k++){
            cout << " ";
        }
        for(int l=0;l<n-i;l++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=1;i<=n;i++){
        for (int j=0;j<i;j++){
            cout << "*";
        }
        for (int k=0;k<2*(n-i);k++){
            cout << " ";
        }
        for (int l=0;l<i;l++){
            cout << "*";
        }
        cout << endl;
    }
    
}
void pattern20 (int n){
    for (int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << "*";
        }
        for (int k=0;k<2*(n-i);k++){
            cout << " ";
        }
        for (int l=0;l<i;l++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        for(int k=0;k<2*(i);k++){
            cout << " ";
        }
        for (int l=0;l<n-i;l++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern21 (int n){
    for (int i =0;i<n;i++){
        for (int j=0;j<n;j++){
            if(i==0 || j==0|| i==n-1 || j== n-1){
                cout << "*";
            }
            else cout<< " ";
        }
        cout << endl;
    }
}
void pattern22 (int n){
    for (int i =0;i<n*2-1;i++){
        for (int j=0;j<n*2-1;j++){
            int top=i;
            int right=j;
            int left = (2*n-2)-j;
            int bottom=(2*n-2)-i;
            cout << (n-min(min(top,bottom),min(right,left)));
        }
        cout << endl;
    }
}
int main(){
    int n ;
    cin >> n;
    pattern22 (n);
    return 0;
}