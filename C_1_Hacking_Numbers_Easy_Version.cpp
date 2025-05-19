#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    string resp;

    cout << "mul 9" << endl;
    cout.flush();
    cin >> resp;
    if (resp == "-1") return;

    cout << "digit" << endl;
    cout.flush();
    cin >> resp;
    if (resp == "-1") return;

    cout << "digit" << endl;
    cout.flush();
    cin >> resp;
    if (resp == "-1") return;

    cout << "add " << (n - 9) << endl;
    cout.flush();
    cin >> resp;
    if (resp == "-1") return;

    cout << "!" << endl;
    cout.flush();
    cin >> resp;
    if (resp == "-1") return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
