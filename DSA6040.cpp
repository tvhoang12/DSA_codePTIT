#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int m, n, p;
        cin >> m >> n >> p;
        long long a[m + 5], b[n + 5], c[p + 5];

        for(int i = 0; i < m; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for(int i = 0; i < p; i++) {
            cin >> c[i];
        }

        vector<long long> v;
        for(int i = 0; i < m; i++) {
            if(binary_search(b, b + n, a[i]) && binary_search(c, c + p, a[i])) {
                v.push_back(a[i]);
            }
        }
        sort(v.begin(), v.end());

        if(v.size() == 0) {
            cout << -1 << endl;
        }
        else {
            for(int i = 0; i < v.size();i++) cout << v[i] << " ";
            cout << endl;
        }
    }

    return 0;
}