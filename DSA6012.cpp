#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a;
    
        for(int i = 1; i <= n; i ++) {
            int s; cin >> s;
            a.push_back(s);
        }
        for(int i = 1; i <= k; i++) {
            int key = 1;
            for(int j = 0; j < a.size(); j++) {
                if(a[key] < a[j]) key = j;
            }
            cout << a[key] << " ";
            
            a.erase(a.begin() + key);
        }
        cout << endl;
    }
}