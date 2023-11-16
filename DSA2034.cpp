#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n) {
    for(int i = 1; i <= n; i++) {
        if(abs(a[i] - a[i - 1]) == 1) {
            return 0;
            break;
        }
    }
    return 1;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n, a[1000];
        cin >> n;
        for(int i = 1; i <= n; i++) a[i] = i;

        do {
            if(check(a, n)) {
                for(int i = 1; i <= n; i++) {
                    cout << a[i];
                }
                cout << endl;
            }
            } while(next_permutation(a + 1, a + n + 1));
    }
}