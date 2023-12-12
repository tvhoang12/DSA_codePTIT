#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll a[n + 6];
        for(ll i = 1; i <= n; i++) cin >> a[i];

        for(ll i = 1; i <= n - k + 1; i ++) {
            int key = a[i];
            for(ll j = i + 1; j <= i+k-1; j++) {
                if(a[j] > key) key = a[j];
            }
            cout << key << " ";
        }
        cout << endl;
    }
    
    return 0;
}