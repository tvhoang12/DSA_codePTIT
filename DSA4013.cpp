//sắp xếp kanguru
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ; cin >> t;
    while(t--) {
        int n ; cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++) {
            int k; cin >> k;
            a.push_back(k);
        }
        sort(a.begin(), a.end());
        int answer = n, left = n / 2 - 1, right = n - 1;

        while(left >= 0 && right >= n / 2) {
            if(2 * a[left] <= a[right]) {
                left --;
                right --;
                answer --;
            }
            else left --;
        }

        cout << answer << endl;
    }

    return 0;
}