#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
 
        // Step 1: Multiply x by 9
        cout << "mul 9" << endl;
        cout.flush();
        string response;
        cin >> response;
        if (response == "-1") return 0;
 
        // Step 2: Apply digit function
        cout << "digit" << endl;
        cout.flush();
        cin >> response;
        if (response == "-1") return 0;
 
        // Step 3: Apply digit function again to force x = 9
        cout << "digit" << endl;
        cout.flush();
        cin >> response;
        if (response == "-1") return 0;
 
        // Step 4: Add (n - 9) to reach target n
        cout << "add " << (n - 9) << endl;
        cout.flush();
        cin >> response;
        if (response == "-1") return 0;
 
        // Final Step: Confirm equality
        cout << "!" << endl;
        cout.flush();
        cin >> response;
        if (response == "-1") return 0;
    }
 
    return 0;
}