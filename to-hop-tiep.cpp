#include<bits/stdc++.h>
using namespace std;

int n, k, a[50], b[50];
int cnt;

void check() {
    for(int i = 1; i <= k; i++) {
        for(int j = 1; j <= k; j++) {
            if(a[j] == b[i]) cnt++;
        }
    }
}

void sinhToHop() {
    int i = k;
    while(i >= 1 && a[i] == n - k + i) {
        --i;
    }
    if(i == 0) {
        cnt = k;
    }
    else {
        for(int j = 1; j <= k; j++) {
            b[j] = a[j];
        }
        a[i]++;
        for(int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
        check();
        cnt = k - cnt;
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cnt = 0;
        cin >> n >> k;
        for(int i = 1; i <= k; i ++) cin >> a[i];
        sinhToHop();
        cout << cnt << endl;
    }

    return 0;
}