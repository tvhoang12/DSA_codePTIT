#include<bits/stdc++.h>
using namespace std;

int n, k, a[1000], j, b[1000], ok, cnt;

bool check() {
    int sum = 0;
    for(int i = 1; i <= j; i ++) {
        sum += a[b[i]];
    }
}

void combinationalGeneration () {
    int i = n;
    while(i >= 1 && a[i] == n - j + i) {
        --i;
    }
    if(i == 0) {
        ok = 0;
    }
    else {
        b[i]++;
        for(int l = i + 1; l <= j; l++) {
            b[l] = b[l - 1] + 1;
        }
    }
}

int main() {
    cin >> n;
    cin >> k;
    int a[n +6];
    
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        if(a[i] < k) {
            b[i] = i;
        }
        else if(a[i] == k) {
            cout << a[i] << endl;
        }
    }
    sort(a + 1, a + n + 1);
    
}