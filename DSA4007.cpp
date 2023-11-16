//he co so k
#include<bits/stdc++.h>
using namespace std;

string sumBinary(string s1, string s2, int n) {
    int rem = 0;
    string sum = "";
    for(int i = s1.length() - 1; i >= 0; i--) {
        if((s1[i] + s2[i] - '0' - '0' + rem) > n) {
            sum = to_string(s1[i] + s2[i] - '0' - '0' - n - 1 + rem) + sum;
            rem = 1;
        }
        else {
            sum = to_string(s1[i] + s2[i] - '0' - '0' + rem) + sum;
            rem = 0;
        }

        if(i == 0 && rem == 1) {
            sum = to_string(rem) + sum;
        }
    }

    return sum;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        string s1, s2;
        cin >> n >> s1 >> s2;

        if(s1.length() < s2.length()) {
            while(s1.length() != s2.length()) {
                s1 = '0' + s1;
            }
        }
        else {
            while(s2.length() != s1.length()) {
                s2 = '0' + s2;
            }
        }
        
        cout << sumBinary(s1, s2, n - 1) << endl;
    }
}