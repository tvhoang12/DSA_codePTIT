//dãy xâu fibonacci
#include<bits/stdc++.h>
#define ll                  long long
#define FOR(i, l, r)        for (int i = l; i < r; i++)
using namespace std;
ll f[100];

char Load(ll n, ll k) {
	if (n == 1)return '0';
	if (n == 2)return '1';
	if (k <= f[n - 2]) return Load(n - 2, k);
	else return Load(n - 1, k - f[n - 2]);
}

int main() {
	f[1] = f[2] = 1;
	FOR(i, 3, 93) f[i] = f[i - 1] + f[i - 2];
	int t;
    cin >> t; 
    while (t--) {
		ll n, i; cin >> n >> i;
		cout << Load(n, i) << endl;
	}
}