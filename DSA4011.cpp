#include<bits/stdc++.h>
using namespace std;

long long number(string s) {
    int x = 0;
    for(int i = 0; i < s.length(); i++) {
        x = x*2 + (s[i] - '0');
    }

    return x;
}

int main() {
    int t; cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << (long long)number(s1) * number(s2) << endl;
    }
}