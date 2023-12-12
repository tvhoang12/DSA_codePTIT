#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int m, n, k;
        cin >> m >> n >> k;
        vector<int> a;

        for(int i= 1; i <= m; i++) {
            int s; cin >> s;
            a.push_back(s);
        }
        for(int i = 1; i <= n; i++) {
            int s; cin >> s;
            a.push_back(s);
        }

        sort(a.begin(), a.end());

        cout << a[k - 1] << endl;
    }

    return 0;
}