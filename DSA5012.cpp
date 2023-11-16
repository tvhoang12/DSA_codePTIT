#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;
long long C[1001][1001];

int main() {
    C[0][0] = 1;
    for(int i = 1; i <= 1000; i++) {
        C[i][0] = 1;
        for(int j = 1; j <= 1000; j++) {
            C[i][j] = (C[i - 1][j - 1] % mod + C[i - 1][j] % mod) % mod;
        }
    }
    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        cout << C[n][k] << endl;
    }
}