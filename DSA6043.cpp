#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n + 5];
        int sumright = 0;

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            sumright += a[i];
        }sumright -= a[1];
        
        int sumleft = 0;
        int key = 0;
        
        for(int i = 2; i <= n; i++) {
            sumright -= a[i];
            sumleft += a[i - 1];
            if(sumright == sumleft) {
                key = i;
                break;
            }
        }

        if(key == 0) cout << "-1" << endl;
        else cout << key << endl;
    }
}