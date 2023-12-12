#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        stack<char> st;
        int count = 0;
        int max = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') st.push(s[i]);
            else if(s[i] == ')') {
                if(st.empty()) {
                    
                    continue;
                }
                else {
                    if(st.top() == '(') {
                        count += 2;
                        st.pop();
                    }
                }
            }
        }

        cout << count << endl;
    }
}