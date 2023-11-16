#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> res;
int n, k, arra[25], temp[105];

void backtrack(int pos, int i, int sum) {
    for(int j = i; j <= n; j++) {
        sum += arra[j];
        temp[pos] = arra[j];
        if(sum == k) {
            vector<int> v;
            for(int k = 1; k <= pos; k++) {
                v.push_back(temp[k]);
            }
            res.push_back(v);
        }
        else if(sum < k) {
            backtrack(pos + 1, j, sum);
        }
        sum -= arra[j];
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        res.clear();
        cin >> n >> k;
        for(int i = 1; i <= n; i++) {
            cin >> arra[i];
        }
        backtrack(1, 1, 0);
        if(res.size() == 0) {
            cout << -1 << endl;
            continue;
        }
        else {
            cout << res.size() << " ";
            for(int i = 0; i < res.size(); i ++) {
                cout << "{";
                for(int j = 0; j < res[i].size(); j++) {
                    if(j == res[i].size() - 1) cout << res[i][j] << "}";
                    else cout << res[i][j] << " ";
                }
                cout << " ";
            }
            cout << endl;
        }
    }
}