#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    char add, equal;
    cin >> a >> add >> b >> equal >> c;
    int d = a+b;
    if(d == c) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}