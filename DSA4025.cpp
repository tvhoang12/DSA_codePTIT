#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;
long long a[1000000005];

void fibonacci(long long n) {
    if(n == 1) {
        a[n] = 1;
        return;
    }
    else if(n == 2) {
        a[n] = 1;
        return;
    }
    else if(a[n] != 0) return;
    else {
        fibonacci(n - 1);
        a[n] = (a[n - 1] % mod + a[n - 2] % mod) % mod;
    }
}

int main() {
    fibonacci(1000000000);
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}