#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MOD = 998244353;
const int MAXN = 501;

int factorial[MAXN], invFactorial[MAXN];

// Fast exponentiation (a^b % MOD)
int modPow(int base, int exp) {
    int result = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp & 1) result = result * base % MOD;
        base = base * base % MOD;
        exp >>= 1;
    }
    return result;
}

// Modular inverse using Fermat's little theorem
int modInverse(int a) {
    return modPow(a, MOD - 2);
}

// Computes nCk % MOD
int combination(int n, int k) {
    if (k < 0 || k > n) return 0;
    return factorial[n] * invFactorial[k] % MOD * invFactorial[n - k] % MOD;
}

// Precomputes factorials and their modular inverses
void precomputeFactorials() {
    factorial[0] = invFactorial[0] = 1;
    for (int i = 1; i < MAXN; ++i) {
        factorial[i] = factorial[i - 1] * i % MOD;
        invFactorial[i] = modInverse(factorial[i]);
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precomputeFactorials();

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int strLength, operations;
        string binaryStr;
        cin >> strLength >> operations >> binaryStr;

        vector<int> dp(operations + 1, 0);
        dp[0] = 1; // Base case: 0 operations used

        for (int idx = strLength - 1; idx >= 0; --idx) {
            vector<int> newDp(operations + 1, 0);
            for (int usedOps = 0; usedOps <= operations; ++usedOps) {
                if (dp[usedOps] == 0) continue;

                for (int apply = 0; usedOps + apply <= operations; ++apply) {
                    int totalOps = usedOps + apply;
                    int evenCount = (totalOps + 1) / 2;
                    int oddCount = totalOps / 2;

                    int parity = binaryStr[idx] - '0';
                    int applicable = (parity == 0) ? evenCount : oddCount;

                    int ways = combination(applicable, apply);
                    newDp[totalOps] = (newDp[totalOps] + dp[usedOps] * ways % MOD) % MOD;
                }
            }
            dp = newDp;
        }

        cout << dp[operations] << '\n';
    }

    return 0;
}
