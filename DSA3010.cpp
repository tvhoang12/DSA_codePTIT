//nối dây
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        multiset<long long> a;
        for(int i = 1; i <= n; i++) {
            int k; cin >> k;
            a.insert(k);
        }
        long long cost = 0;
        while(a.size() != 1) {
            long long left = *a.begin();
            a.erase(a.find(*a.begin()));
            long long right = *a.begin();
            a.erase(a.find(*a.begin()));
            cost +=(left + right);
            a.insert(left + right);
        }
        cout << cost << endl;
    }
}