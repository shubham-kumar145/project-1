#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MOD = 998244353;
const int MAX = 501;

ll factorial[MAX], invFactorial[MAX];

// Fast exponentiation
ll power(ll base, ll exponent) {
    ll result = 1;
    base %= MOD;
    while (exponent > 0) {
        if (exponent & 1) result = result * base % MOD;
        base = base * base % MOD;
        exponent >>= 1;
    }
    return result;
}

// Modular inverse using Fermat's little theorem
ll modInverse(ll a) {
    return power(a, MOD - 2);
}

// Compute nCk % MOD
ll combination(int n, int k) {
    if (k < 0 || k > n) return 0;
    return factorial[n] * invFactorial[k] % MOD * invFactorial[n - k] % MOD;
}

// Precompute factorials and inverse factorials
void initFactorials() {
    factorial[0] = invFactorial[0] = 1;
    for (int i = 1; i < MAX; ++i) {
        factorial[i] = factorial[i - 1] * i % MOD;
        invFactorial[i] = modInverse(factorial[i]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    initFactorials();

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n, k;
        string binaryString;
        cin >> n >> k >> binaryString;

        vector<ll> dp(k + 1, 0);
        dp[0] = 1; // Base case

        for (int idx = n - 1; idx >= 0; --idx) {
            vector<ll> newDp(k + 1, 0);
            for (int used = 0; used <= k; ++used) {
                if (dp[used] == 0) continue;
                for (int apply = 0; used + apply <= k; ++apply) {
                    int totalOps = used + apply;
                    int evenCount = (totalOps + 1) / 2;
                    int oddCount = totalOps / 2;
                    int digit = binaryString[idx] - '0';
                    int possiblePositions = (digit == 0) ? evenCount : oddCount;

                    ll ways = combination(possiblePositions, apply);
                    newDp[totalOps] = (newDp[totalOps] + dp[used] * ways % MOD) % MOD;
                }
            }
            dp = newDp;
        }

        cout << dp[k] << '\n';
    }

    return 0;
}
