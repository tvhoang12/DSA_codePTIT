#include<bits/stdc++.h>
using namespace std;



int main() {
    int t; cin >> t;
    while(t--) {
        int m, n; cin >> m >> n;
        int a[m + 1];

        for(int i = 1; i <= m; i ++) cin >> a[i];

        sort(a + 1, a + m + 1);

        int cnt = 0;

        for(int i = m; i >= 1; i--) {
            int j = i - 1;
            while((a[i] - a[j]) < n && j >= 1) {
                cnt ++;
                j --;
            }
        }

        cout << cnt << endl;
    }
}