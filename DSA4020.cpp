#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> number;
        int target; cin >> target;
    
        for(int i = 1; i <= n; i++) {
            int k; cin >> k;
            number.push_back(k);
        }

        auto it = find(number.begin(), number.end(), target);

        if(it != number.end()) {
            for(int i = 0; i < n; i++) {
                if(target == number[i]) cout << i + 1 << endl;
                else continue;
            }
        }   
        else cout << "NO" << endl;
    }
}