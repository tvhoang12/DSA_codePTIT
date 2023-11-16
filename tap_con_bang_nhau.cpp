#include<bits/stdc++.h>
using namespace std;

int sum(int a[], int i, int n) {
    int tong = 0;
    while(i < n) {
        tong += a[i];
        i++;
    }

    return tong;
}

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        int a[n+5];
        int ok = 0;
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a, a+n);

        for(int i = 1; i < n-1; i++) {
            int left = sum(a,0,i+1);
            int right = sum(a,i+1,n);

            if(left == right) {
                ok = 1;
                break;
            }
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}