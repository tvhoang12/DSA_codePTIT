#include<bits/stdc++.h>
using namespace std;

int n, a[100], b[100], counte;
bool check;

void binaryGenerator(int i, int S, int cnt) {
    for(int j = 0; j <= 1; j++) {
        b[i] = j;
        if(i == n) {
            if(S == 0) {
                counte = cnt;
                check = true;
            }
            else check=false;
        }
        else {
            if(S - a[i] >= 0) {
                binaryGenerator(i - 1, S - a[i]*b[i], cnt + b[i]);
            }
        }
    }

}

int main() {
    cin >> n;
    int S; cin >> S;
    check = false;

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    binaryGenerator(n, S, 0);
    if(check) {cout << counte << endl;}
    else cout << -1 << endl;
}