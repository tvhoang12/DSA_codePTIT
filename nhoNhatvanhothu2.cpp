#include<bits/stdc++.h>
using namespace std;

void selection(long long a[], int n) {
    for(int i = 1; i <= 2; i++) {
        int jmin = i;
        for(int j = i; j <= n; j++) {
            if(a[jmin] > a[j]) jmin = j;
        }
        swap(a[jmin], a[i]);
    }
    if(a[1] == a[2]) cout << -1 << endl;
    else cout << a[1] << " "  << a[2] << endl;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long a[n+6];
        for(int i = 1; i <= n; i++) cin >> a[i];
        
        selection(a, n);
    }
    
}