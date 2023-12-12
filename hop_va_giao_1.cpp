#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int m, n; cin >> m >> n;
        int a[m+5], b[n+5];
        set<int> Union, Intersection;
        for(int i = 1; i <= m; i++) {
            cin >> a[i];
            Union.insert(a[i]);
        }
        for(int i = 1; i <= n; i++) {
            cin >> b[i];
            Union.insert(b[i]);
        }
        for(int i = 1; i <= m; i ++) {
            for(int j = 1; j <= n; j++) {
                if(a[i] == b[j]) {
                    Intersection.insert(a[i]);
                continue;
                }
            }
        }
        for(int element : Union) {
            cout << element << " ";
        }
        cout << endl;
        for(int element : Intersection) {
            cout << element << " ";
        }
        cout << endl;
    }
}