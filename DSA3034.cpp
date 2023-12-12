#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long m, n, k;
        cin >> m >> n >> k;
        long long a[m + 1], b[n + 1], c[k + 1];
        
        for(int i = 1; i <= m; i++) cin >> a[i];
        
        for(int i = 1; i <= n; i++) cin >> b[i];
        
        for(int i = 1; i <= k; i++) cin >> c[i];

        vector<long long> temp;
        long long i =  1,j = 1, h = 1;

        while(i <= m && j <= n && h <= k) {
            if(a[i] == b[j] && b[j] == c[h]) {
                temp.push_back(a[i]);
                i++;
                j++;
                h++;
            }
            else if(a[i] < b[j]) {
                i ++;
            } else if(b[j] < c[h]) {
                j++;
            } else {
                h++;
            }
        }

        if(temp.size() == 0) {
            cout << "NO" << endl;
        }
        else {
            for(int i = 0; i < temp.size(); i++) {
                cout << temp[i] << " ";
            }
            cout << endl;
        }
    }
}