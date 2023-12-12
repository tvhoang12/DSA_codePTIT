//luy thừa
#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
long long exponential(long long n, long long k) {
    if(k == 0) return 1;
    long long x = exponential(n, k / 2);
    if(k % 2 == 0) return (x * x) % mod;
    else {
        return (((x * x) % mod) * n) % mod;
    }
}

int main() {
    int t; cin >> t;
    while(t--) {   
        long long n, k = 0;
        cin >> n;
        long long m = n;
        while(m != 0) {
            k = k * 10 + m % 10;
            m /= 10;
        }
        cout << exponential(n, k) << endl;
    }
}