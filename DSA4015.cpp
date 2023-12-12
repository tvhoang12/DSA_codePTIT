//floor(X)
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        long long a[n + 1];
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        sort(a + 1, a + n + 1);
        if(x < a[1]) cout << -1 << endl;
        else {
            int i = 1;
            while(a[i] <= x) {
                i++;
            }
            cout << i - 1 << endl;
        }
    }
}