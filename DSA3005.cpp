#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n + 5];
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        k = min(k, n - k);
        vector<int> leftK, rightk;
        int sumLeft = 0, sumRight = 0;
        for(int i = 1; i <= k; i++) {
            sumLeft += a[i];
        }
        for(int i = k + 1; i <= n; i++) {
            sumRight += a[i];
        }
        cout << sumRight - sumLeft<< endl;
    }
}