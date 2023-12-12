#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        bool ok = false;
        cin >> n >> m;

        vector<vector<int>> a(n + 1);
        int x, y;

        while(m--) {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }

        vector<int> parent(n + 1, -1);

        for(int i = 1; i <= n; i++) {
            queue<int> qu;
            vector<bool> check(n + 1, 1);

            parent[i] = -1;
            qu.push(i);
            check[i] = false;
            
            while(!qu.empty()) {
                int k = qu.front();
                qu.pop();

                for(int j : a[k]) {
                    if(check[j]) {
                        qu.push(j);
                        check[j] = false;
                        parent[j] = k;
                    }
                    else if(j != parent[j]) {
                        ok = true;
                        break;
                    }
                }
            }
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}