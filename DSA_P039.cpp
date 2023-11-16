#include<bits/stdc++.h>
using namespace std;


long long a[21][21], b[21], n;
long long used[21], res;

void nextPermutationBackTrack(int i) {
    for(int j = 1; j <= n; j++) {
        if(used[j] == 0) {
            b[i] = j;
            used[j] = 1;
            if(i == n) {
                long long sum = 0;
                for(int k = 1; k <= n; k++) {
                    sum += a[k][b[k]];
                }
                res = max(res, sum);
            }
            else {
                nextPermutationBackTrack(i + 1);
            }
            used[j] = 0;
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1; i <= n; i++) {
            b[i] = i;
            for(int j = 1; j <= n; j++) cin >> a[i][j];
        }

        res = -1;
        nextPermutationBackTrack(1);
        cout << res << endl;
    }
}