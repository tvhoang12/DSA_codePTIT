//con ếch
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long s[51];
    s[1] = 1, s[2] = 2, s[3] = 4;
    for(int i = 4; i <= 50; i ++) {
        s[i] = s[i - 1] + s[i - 2] + s[i - 3];
    }
    int t; cin >> t;
    while(t --) {
        int n; cin >> n;
        cout << s[n] << endl;
    }
}