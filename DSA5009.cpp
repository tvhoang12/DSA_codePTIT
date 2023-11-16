//tap con bang nhau
#include<bits/stdc++.h>
using namespace std;

int n, a[105], sumall;
string ans;
void binaryBacktrack(int i, int sum) {
    if(ans == "YES") return;
    if(2 * sum == sumall) {
        ans = "YES";
        return;
    }
    if(i < n) {
        if(2*(sum + a[i]) <= sumall) {
            sum += a[i];
            binaryBacktrack(i + 1, sum + a[i]);
        }
        binaryBacktrack(i + 1, sum);
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        sumall = 0;
        ans = "NO";

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            sumall += a[i];
        }
        if(sumall % 2 == 0) binaryBacktrack(1, 0);
        
        cout << ans<< endl;
    }
    return 0;
}
