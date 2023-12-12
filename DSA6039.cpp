#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        long long a[n + 1];
        for(long long i = 1; i <= n; i++) {
            cin >> a[i];
        }

        bool found = false;

        for(long long i = 1; i <= n - 1; i++) {
            bool find = binary_search(a + i + 1, a + n + 1, a[i]);
            if(find) {
                found = true;
                cout << a[i] << endl;
                break;
            }
        }

        if(found == false) cout << "NO" << endl;
    }

    return 0;
}