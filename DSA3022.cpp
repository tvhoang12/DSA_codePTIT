#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    long long max1 = a[n] * a[n - 1] * a[n - 2],
            max2 = a[1] * a[2] * a[n];
    cout << max(max2, max1) << endl;
}