#include<bits/stdc++.h>
#define ll long long
using namespace std;

void selectionSort(ll a[], ll n, ll x) {
    for(ll i = 1; i <= n; i++) {
        ll jmin = i;
        for(ll j = i; j <= n; j++) {
            if(abs(x - a[j]) < abs(x-a[jmin])) jmin = j;
            if(abs(x-a[j]) <  abs(x-a[jmin]) && a[j] < a[jmin]) jmin = j;
        }
        if(jmin != i) {
        swap(a[jmin], a[i]);
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        ll n, x; cin >> n >> x;
        ll a[n+6];
        for(ll i = 1; i <= n; i++) cin >> a[i];
        selectionSort(a, n, x);
        for(ll i = 1; i <= n; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}