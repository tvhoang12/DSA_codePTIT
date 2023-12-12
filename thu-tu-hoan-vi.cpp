#include<bits/stdc++.h>
using namespace std;

int n, a[10], b[10];

bool check() {
    for(int i = 1; i <= n; i++) {
        if(a[i] != b[i]) return false;
    }

    return true;
}

void sinhHoanVi () {
    for(int i = n - 1; i >= 1; i++) {
        if(a[i] < a[i + 1]) {
            sort(a + i + 1, a + n + 1);
            for(int j = i + 1; j <= n; j++) {
                if(a[j] > a[i]) {
                    swap(a[j], a[i]);
                    break;
                }
            }
        }
        break;
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int cnt = 0;
        for(int i = 1; i <= n; i ++) {
            a[i] = i;
            cin >> b[i];
        }
        while(++cnt) {
            if(check()) {
                cout << cnt << endl;
                break;
            }
            // sinhHoanVi();
            for(int i = n - 1; i >= 1; i--) {
                if(a[i] < a[i + 1]) {
                    sort(a + i + 1, a + n);
                    for(int j = i + 1; j <= n; j++) {
                        if(a[j] > a[i]) {
                            swap(a[i], a[j]);
                            break;
                        }
                    }
                }
                break;
            }
        }
    }
}