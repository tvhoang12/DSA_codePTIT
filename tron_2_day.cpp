#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long m, n; cin >> m >> n;
        long long a[m+5], b[n+5], mix[m + n + 5];
        for(long long i = 1; i <= m; i++) cin >> a[i];
        for(long long i = 1; i <= n; i++) cin >> b[i];
        for(long long i = 1; i <= m; i++) mix[i] = a[i];
        for(long long i = 1; i <= n; i++) mix[m+i] = b[i];
        sort(mix + 1, mix + m + n + 1);
        for(long long i = 1; i <= m+n; i++) cout << mix[i] << " ";
        cout << endl;
    }
}