#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n+5];
        map<int, int> sx;
        
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            sx[a[i]]++;
        }

        for(int i = 1; i <= n; i++) {
            while(sx[a[i]] != 0) {
                cout << a[i] << " ";
                sx[a[i]]--;
            }
        }

        cout << endl;
    }
}