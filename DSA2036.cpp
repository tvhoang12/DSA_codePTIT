#include<bits/stdc++.h>
using namespace std;

vector<int> a, b;
vector<vector<int>> result;

bool check() {
    int sum = 0;
    for(int i : b) sum += i;
    if(sum % 2 == 0) return false;
    else return true;
}

void backtrack(int i) {
    for(int j = 0; j <= 1; j++) {
        if(j == 1) b.push_back(a[i]);
        if(i == 0) {
            if(check()) result.push_back(b);
        }
        else backtrack(i - 1);
        if(j == 1) b.pop_back();
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        a.clear();
        b.clear();
        result.clear();

        for(int i = 1; i <= n; i++) {
            int x; cin >> x;
            a.push_back(x);
        }

        sort(a.begin(), a.end());

        backtrack(n - 1);
        sort(result.begin(), result.end());
        for(int i = 0; i < result.size(); i++) {
            for(int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}