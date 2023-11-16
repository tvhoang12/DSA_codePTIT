#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        string S;
        cin >> S;
        stack<char> st;
        int res = 0;
        for(char c : S) {
            if(c == '(') {
                st.push(c);
            } else {
                if(!st.empty()) {
                    st.pop();
                } else {
                    res++;
                }
            }
        }
        res += st.size();
        cout << res << endl;
    }
    return 0;
}