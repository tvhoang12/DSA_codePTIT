#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        ll a[n + 5];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll mod = 1e9 + 7;
        ll sumMax = 0;
        sort(a, a + n);
        for(int i = 0; i < n; i++) {
            sumMax = (sumMax + a[i] * i) % mod;
        }
        cout << sumMax << endl;
    }

    return 0;
}