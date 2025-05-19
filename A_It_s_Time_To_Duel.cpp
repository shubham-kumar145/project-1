#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        int total = 0;

        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
            total += vec[i];
        }

        if (total == n) {
            cout << "YES" << endl;
            continue;
        }

        bool found = false;
        for (int i = 0; i < n - 1; ++i) {
            if (vec[i] == 0 && vec[i + 1] == 0) {
                cout << "YES" << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "NO" << endl;
        }
    }

    return 0;
}