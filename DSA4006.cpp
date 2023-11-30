#include<bits/stdc++.h>
using namespace std;

string result(int n) {
    if(n == 2) return "101";
    if(n == 3) return "111";
    else {
        string temp = result(n / 2) + to_string(n % 2) + result(n / 2);
        return temp;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, l, r; 
        cin >> n >> l >> r;
        string s = result(n);

        long long cnt = 0;

        for(int i = l; i <= r; i++) {
            if(s[i - 1] == '1') cnt ++;
        }
        cout << cnt << endl;
    }
}