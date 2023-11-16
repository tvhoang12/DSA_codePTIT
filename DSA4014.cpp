#include<bits/stdc++.h>
using namespace std;

long long a[10000008], n, cnt;

void smallerSearch(long long position, long long left, long long right) {
    if(right == left) {
        if(a[position] > a[left]) cnt = cnt + 1;
    }
    else {
        long long mid = left + ((right - left) / 2);
        smallerSearch(position, left, mid);
        smallerSearch(position, mid + 1, right);
    }
}

int main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        n = 5;
        // cin >> n;
        // for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = n; i >= 1; i--) a[i] = i;
        cnt = 0;

        for(int i = 1; i <= n - 1; i++) {
            smallerSearch(i, i + 1, n);
        }

        cout << cnt << endl;
    }

    return 0;
}