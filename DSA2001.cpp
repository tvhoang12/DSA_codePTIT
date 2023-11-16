#include<bits/stdc++.h>
using namespace std;

int b[105][105];
vector<vector<int>> triangle;

void tamGiac(int a[], int n) {
    vector<int> tmp;
    if(n == 1) {
        a[n] += a[n+1];
        return;
    }
    else {
        for(int i = 1; i <= n - 1; i++) {
            a[i] = a[i] + a[i + 1];
            tmp.push_back(a[i]);
        }
        triangle.push_back(tmp);
        tamGiac(a, n - 1);
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[105];
        vector<int>tmpp;
        for(int i = 1; i <= n; i ++) {
            cin >> a[i];
            tmpp.push_back(a[i]);
        }

        triangle.push_back(tmpp);

        tamGiac(a, n);

        for(int i = triangle.size() - 1; i >= 0; i--) {
            cout << "[";
            for(int j = 0; j <= triangle.size() - i - 1; j++) {
                if(j == triangle.size() - i - 1) cout << triangle[i][j];
                else cout << triangle[i][j] << " ";

            }
            cout << "] ";
        }
        cout << endl;
        triangle.clear();
    }
}