#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n + 5];
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a, a + n);
        int ans = 999999999;
        for(int i = 1; i < n; i++) {
            ans = min(ans, a[i] - a[i - 1]);
        }

        cout << ans << endl;
    }
}