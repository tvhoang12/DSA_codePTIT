#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n + 1];
        int sum = 0;
        for(int i = 1; i <= n; i ++) {
            cin >> a[i];
            sum += a[i];
        }
        cout << n - sum << endl;
    }
}