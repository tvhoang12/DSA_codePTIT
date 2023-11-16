#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int a[n + 1][n + 1];
    for(int i = 1; i <= n; i++) 
        for(int j = 1; j <= n; j++ )
            cin >> a[i][j];

    int count = 0;
    vector<vector<int>> dem;
    int danhdau[n + 1];
    for(int i = 1; i <= n; i++) danhdau[i] = i;


    while(next_permutation(danhdau + 1, danhdau + n + 1)) {
        int sum = 0;
        for(int i = 1; i <= n; i++) {
            sum += a[i][danhdau[i]];
        }
        if(sum == k) { 
            vector<int> tmp;
            for(int i = 1; i <= n; i++) tmp.push_back(danhdau[i]); 
            dem.push_back(tmp);
            count ++;
        }
    }

    cout << count << endl;
    for(int i = 0; i < count; i ++) {
        for(int j = 0; j < n; j++) {
            cout << dem[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}