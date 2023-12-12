#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, s, k;
        cin >> n >> s >> k;
        long long a[n + 5];
        for(long long i = 1; i <= n; i++) {
            cin >> a[i];
        }

        long long sum = a[s];
        long long t = s - 1;
        while(t > 1) {
            if(sum + a[t] < k) {
                sum += a[t];
                t--;
            }
            else if(sum + a[t] == k) {
                break;
            }
            else {
                break;
            }
        }
        if(t < 1 || sum == 0) cout << -1 << endl;
        else cout << t << endl;
    }

    return 0;
}