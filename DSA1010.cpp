#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], ok, b[100], cnt;

void check(int i) {
    for(int j = i; j <= k; j++) {
        if(!binary_search(a + i, a + k + 1, b[j])) {
            cnt ++;
        }
    }
}

void next_combination() {
    int i = k;
    while(i >= 1 && a[i] == n - k + i) {
        i--;
    }
    if(i == 0) {
        cout << k << endl;
    }
    else {
        a[i]++;
        for(int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
        check(i);
        cout << cnt << endl;
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;
        cnt = 0;
        
        for(int i = 1; i <= k; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        next_combination();
    }

    return 0;
}