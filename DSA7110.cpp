#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        stack<char> st;
        bool check = false;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(s[i]);
            else if(s[i] == ')' || s[i] == ']' || s[i] == '}') {
                if(st.empty()) {
                    check = false;
                    break;
                }
                else {
                    if(s[i] == ')' && st.top() == '(') {
                        st.pop();
                        check = true;
                    }
                    else if(s[i] == ']' && st.top() == '[') {
                        st.pop();
                        check = true;
                    }
                    else if(s[i] == '}' && st.top() == '{') {
                        st.pop();
                        check = true;
                    }
                    else {
                        check = false;
                        break;
                    }
                }
            }
        }

        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}