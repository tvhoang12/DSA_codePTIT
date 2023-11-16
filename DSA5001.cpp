#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string a, b;
        cin >> a >> b;
        int log[a.size() + 1][b.size() + 1] = {};
        for(int i = 0; i < a.size(); i++) {
            for(int j = 0; j < b.size(); j++) {
                if(a[i] == b[j]) {
                    log[i + 1][j + 1] = log[i][j] + 1;
                }
                else {
                    log[i + 1][j + 1] = max(log[i+1][j], log[i][j+1]);
                }
            }
        }
        cout << log[a.size()][b.size()] << endl;
    }
}