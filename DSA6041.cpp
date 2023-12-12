#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int> m;
        for(int i = 1; i <= n; i++) {
            int s; cin >> s;
            m[s]++;
        }

        pair<int, int> largerst;
        for(auto i : m) {
            if(i.second > largerst.second) largerst = i;
            
        }
        if(largerst.second > (float)n/2) cout << largerst.first << endl;
        else cout << "NO" << endl;
    }
}