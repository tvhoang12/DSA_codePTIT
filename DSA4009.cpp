#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
int n, k;
long long a[11][11], b[11][11], c[11][11];

void multiplication(long long a[11][11], long long b[11][11]) {
    long long c[11][11] = {0};
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 1; k <= n; k++) {
                c[i][j] += a[i][k] % mod * b[k][j] % mod;
                c[i][j] = c[i][j] % mod;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            a[i][j] = c[i][j];
        }
    }
}

void exponential(long long a[11][11], int k) {
    if(k == 1) {
        return;
    }
    exponential(a, k/2);
    multiplication(a, a);
    if(k % 2 == 1) {
        multiplication(a, b);
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }
        }

        exponential(a, k);
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}