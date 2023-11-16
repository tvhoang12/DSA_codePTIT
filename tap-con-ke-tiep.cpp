#include<bits/stdc++.h>
using namespace std;

int n, k, a[1005];

void nextCombination() {
    int i = k;
    while(i >= 1 && a[i] == n - k + i) {
        i--;
    }
    if(i == 0) {
        //cau hinh cuoi
        for(int i = 1; i <= k; i++) {
            a[i] = i;
        }
    }
    else {
        a[i] ++;
        for(int j = i + 1; j <= k; j ++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;
        
        for(int i = 1; i <= k; i ++) {
            cin >> a[i];
        }
        nextCombination();
        for(int i = 1; i <= k; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}