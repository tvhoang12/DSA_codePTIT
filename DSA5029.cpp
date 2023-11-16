#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string M;
        cin >> M;
        M = ' ' + M;
        int l[41];
        l[0] = l[1] = 1;
        if(M[1] == '0') {
            cout << 0 << endl;
            continue;
        }
        for(unsigned int i = 1; i <= M.length() - 1; i++) {
            if(M[i] == '0') {
                if(M[i - 1] > '2') {
                    l[M.length() - 1] = 0;
                    break;
                }
            }
            else {
                if(M[i - 1] == '1') {
                    l[i] = l[i - 1] + 1;
                } else if(M[i - 1] == '2') {
                    if(M[i] - '0' >= 0 && M[i] - '0' <= 6) {
                        l[i] = l[i - 1] + 1;
                    }else
                        l[i] = l[i - 1];
                }else l[i] = l[i - 1];
            }
        }
        cout << l[M.length()] << endl;
    }
}