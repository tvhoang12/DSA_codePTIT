#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int m, n;
        cin >> m >> n;
        int p[m + 5], q[n + 5];
        
        for(int i = 0; i < m; i++) cin >> p[i];
        for(int i = 0; i < n; i++) cin >> q[i];

        int r[m + n + 1] = {0};
        for(int i = 0; i < m; i++ ) {
            for(int j = 0; j < n; j++) {
                r[i + j] += p[i] * q[j]; 
            }
        }
        for(int i = 0; i < m + n - 1; i++) cout << r[i] << " ";
        cout << endl;
    }
}