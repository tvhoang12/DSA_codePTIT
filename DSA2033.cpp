#include<bits/stdc++.h>
using namespace std;

int n; int a[20];

void ktao() {
    for(int i = 1; i <= n; i++) {
        a[i] = i;
    }
}

bool check() {
    for(int i = 2; i <= n; i++) {
        if(abs(a[i] - a[i - 1]) == 1) return 0;
    }
    return 1;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        if(n < 4) {
            cout << endl;
            continue;
        }
        else {
            ktao();
            while(next_permutation(a + 1, a + n + 1)) {
                if(check()) {
                    for(int i = 1; i <= n; i++) {
                        cout << a[i];
                    }
                    cout << endl;
                }
            }
            cout << endl;
        }
    }
}