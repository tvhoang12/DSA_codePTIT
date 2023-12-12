#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n + 1], b[n];
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for(int i = 1; i <= n - 1; i++) {
            cin >> b[i];
        }
        int answer = -1;
        for(int i = 1; i <= n - 1; i++) {
            if(a[i] != b[i]) {
                answer = i;
                break;
            }
        }

        if(answer == -1) cout << n << endl;
        else cout << answer << endl;
    }
}