#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, k;cin >> n >> k;
        long long count = 0;
        long long a[n + 1];

        for(int i = 1; i <= n; i++) cin >> a[i];

        sort(a + 1, a + n + 1);

        for(int i = 1; i <= n; i++) {
            for(int j = i + 1; j <= n; j++) {
                long long x = lower_bound(a + j + 1, a + n + 1, k - a[i] - a[j]) - a;
                count += x - j - 1;
            }
        }
        cout << count << endl;
    }
}