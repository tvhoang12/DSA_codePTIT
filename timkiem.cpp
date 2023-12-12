#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        int a[n+5];
        
        for(int i = 1; i <= n; i++) cin >> a[i];

        sort(a+1, a+n+1);

        bool found = binary_search(a + 1, a + n + 1, x);

        if(found) cout << 1 << endl;
        else cout << -1 << endl;
    }
}