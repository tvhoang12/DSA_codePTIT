#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        int a[n + 1];
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            if(x == a[i]) x = i;
        }

        cout << x << endl;
    }
}