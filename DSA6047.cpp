#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n; cin >> n;
        vector<long long> a;
        for(int i = 1; i <= n; i++) {
            long long s; cin >> s;
            a.push_back(s*s);
        }
        sort(a.begin(), a.end());

        bool flag = false;
        while(a.size() > 1) {
            for(int i = 0; i < a.size(); i++) {
                if(binary_search(a.begin(), a.end(),a[a.size() - 1] - a[i])) {
                    flag = true;
                    break;
                }
            }
            a.pop_back();
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}