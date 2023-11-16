#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n + 5];
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        stack<int> st;
        int b[n + 5];
        memset(b, -1, sizeof(b));

        for(int i = 1; i <= n; i++) {
            while(!st.empty() && a[st.top()] < a[i]) {
                b[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        for(int i = 1; i <= n; i++) {
            if(b[i] == -1) cout << -1 << ' ';
            else
                cout << a[b[i]] << " ";
        }cout << endl;
    }
}