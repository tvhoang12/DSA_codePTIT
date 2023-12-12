#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;

long long luythua(long long r, long long n) {
    if(n == 1) {
        return r;
    }
    else {
        return ((r % mod * luythua(r, n - 1) % mod) % mod);
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        long long r = 0;
        
        while(n != 0) {
            r = r * 10 + n % 10;
            n /= 10;
        }

        long long k = luythua(r, n);
        cout << k << endl;
    }

    return 0;
}