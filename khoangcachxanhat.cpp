#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int A[n];
        for(int i = 1; i <= n; i++) {
            cin >> A[i];
        }

        int B[n];
        B[n] = A[n];

        for(int i = n-1; i >= 1; i--) {
            B[i] = max(B[i + 1], A[i]);
        }
        int ans = -1;
        int i = 0, j = 0;

        while(i < n and j < n) {
            if(B[j] > A[i]) {
                ans = max(ans, j-i);
                j++;
            }
            else i++;
        }
        if(!ans) ans = -1;
        cout << ans << endl;

    }

    return 0;
}
