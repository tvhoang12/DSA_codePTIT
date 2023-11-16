#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[1000];
        vector<vector<int>> B;
        for(int i = 0; i < n; i++) cin >> a[i];

        for(int i = 0; i < n-1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(a[i] > a[j]) swap(a[i], a[j]);
            }

            vector<int> X;
            for(int l = 0; l < n; l++) X.push_back(a[l]);

            B.push_back(X);
        }

        for(int i = B.size() - 1; i >= 0; i--) {
            cout << "Buoc " << i + 1 << ": ";
            for(int j = 0; j < n; j++) {
                cout << B[i][j] << " ";
            }
            cout << endl;
        }
    }
}