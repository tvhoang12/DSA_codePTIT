#include<bits/stdc++.h>
using namespace std;
int n, k, a[101], b[101], ok;

void check(int posleft, int posright, int sum) {
    for(int i = posleft; i <= n; i++) {
        if(sum + a[i] == k) {
            ok = 1;
            b[posright] = a[i];
            cout << "[" << b[1];
            for(int j = 2; j <= posright; j++) {
                cout << " " << b[j];
            }
            cout << "] ";
        }
        else if(sum + a[i] < k) {
            b[posright] = a[i];
            check(i + 1, posright + 1, sum + a[i]);
        }
    }
}
int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1);
        ok = 0;
        check(1, 1, 0);
        if(ok == 0) cout << -1 << endl;
        cout << endl;
    }
}