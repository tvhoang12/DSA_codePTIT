//gấp đôi dãy số
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, k; cin >> n >> k;
        long long a[n + 1];
        for(int i = 1; i <= n; i++) {
            a[i] = pow(2, i - 1);
        }

        for(int i = n; i >= 1; i--) {
            if(k == a[i]) {
                cout << char('A' + i - 1) << endl;
                break;
            }
            else if (k > a[i]) {
                k -= a[i];
            }
        }
    }
}