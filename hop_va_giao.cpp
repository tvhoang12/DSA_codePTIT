#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int m, n; cin >> m >> n;
        long long a[m + 6], b[n + 6];
        set<int> Union, Intersection;
        for(int i = 1; i <= m; i++) {
            cin >> a[i];
            Union.insert(a[i]);
        }
        for(int i = 1; i <= n; i++) {
            cin >> b[i];
            Union.insert(b[i]);
            for(int j = 1; j <= m; j++) {
                if(a[j] == b[i]) Intersection.insert(b[i]);
            }
        }
        for(long long element : Union) {
            cout << element << " ";
        }
        cout << endl;
        for(long long element : Intersection) {
            cout << element << " ";
        }
    }
}