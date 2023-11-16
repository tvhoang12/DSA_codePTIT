#include<bits/stdc++.h>
using namespace std;

int n, k, a[20], ok, temp[20];

void initialization() {
    for(int i = 1; i <= k; i++) {
        temp[i] = i;
    }
}

void next_combination() {
    int i = k;
    while(i >= 1 && temp[i] == n - k + i) {
        i --;
    }
    if(i == 0) {
        ok = 0;
    }
    else {
        temp[i] ++;
        for(int j = i + 1; j <= k; j++) {
            temp[j] = temp[j - 1] + 1;
        }
    }
}

bool check() {
    for(int i = 1; i <= k; i++) {
        if(a[i] != temp[i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;

        for(int i = 1; i <= k; i++) {
            cin >> a[i];
        }

        int cnt = 1, ok = 1;
        
        initialization();

        while(ok) {
            if(check()) {
                cout << cnt << endl;
                break;
            }
            else {
                cnt ++;
            }
            
            next_combination();
        }
    }

    return 0;
}