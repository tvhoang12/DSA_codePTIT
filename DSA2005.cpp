#include<bits/stdc++.h>
using namespace std;

int n, a[30], ok;

void ktao() {
    for(int i = 1; i <= n; i++) {
        a[i] = i;
    }
}

int main() {
    cin >> n;
    ktao();
    while(next_permutation(a + 1, a + n + 1)) {
        string s;
        for(int i = 1; i <= n; i++) {
            s += 'A' + a[i] - 1;
        }
        cout << s << endl;
    }
}