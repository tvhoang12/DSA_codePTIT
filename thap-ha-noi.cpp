#include<bits/stdc++.h>
using namespace std;
#define ll long long
void chuyen( char a, char b) {
    cout << a << " -> " << b << endl;
}
void solve(int n, char a, char b, char c) {
    if(n == 1) chuyen( a, c);
    else {
        solve(n - 1, a, c, b);
        chuyen( a, c);
        solve(n - 1, b , a, c);
    }
}
int main() {
    int n; cin >> n;
    char a = 'A', b = 'B', c = 'C';
    solve(n, a, b, c);
    return 0;
}
/*độ phức tạp thuật toán: O(n)*/