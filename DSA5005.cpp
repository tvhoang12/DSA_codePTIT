#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        int log[n];
        int s = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            log[i] = 1;
            for(int j = 0; j < i; j++) {
                if(a[i] >= a[j] && log[i] <= log[j]) {
                    log[i] = log[j] + 1;
                }
            }
            s = max(log[i], s);
        }
        cout << n - s << endl;
    }
}