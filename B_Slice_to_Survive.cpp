#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define vec vector
//#define int long long
#define pii pair<int, int>
#define se second
#define fi first
#define pb push_back
#define maxel(v) *max_element(v.begin(), v.end())
#define minel(v) *min_element(v.begin(), v.end())
#define yes cout << "YES\n";
#define m1 cout << "-1\n";
#define no cout << "NO\n";
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

long long cl2(long long x){
    if(x <= 1) return 0;
    return 64 - __builtin_clzll(x - 1);
}

void solve() {
    long long n, m, a, b;
    cin >> n >> m >> a >> b;
    long long da = min(a, n - a + 1);
    long long db = min(b, m - b + 1);
    long long ch = 1 + cl2(m) + cl2(da);
    long long cv = 1 + cl2(n) + cl2(db);
    cout << min(ch, cv) << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tests; cin >> tests;
    for (int i = 0; i < tests; ++i)
    solve();
}
