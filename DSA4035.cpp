#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;

long long exponential(long long n, long long k) {
    if(k == 0) {
        return 1;
    }
    long long x = exponential(n, k / 2);
    if(k % 2 == 0) return (x * x) % mod;
    else {
        return (((x * x) % mod) * n) % mod;
    }
}


int main() {
    long long a, b;
    while(cin >> a >> b) {
        if(a == 0 && b == 0) break;
        cout << exponential(a, b) << endl;
    }
}