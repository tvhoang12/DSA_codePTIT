#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        long long k; 
        cin >> n >> k;
        int a[n + 1];

        for(int i = 1; i <= n; i++) cin >> a[i];

        sort(a + 1, a + n + 1);
        int cnt = 0;

        for(int i = 1; i <= n; i++) {
            for(int j = i + 1; j <= n; j++) {
                if(a[i] + a[j] == k) cnt ++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}