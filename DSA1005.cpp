//sinh hoán vị
#include<bits/stdc++.h>
#define cout(M,n)		 FOR(i,0,n)cout<<M[i]
#define FOR(i,l,r)		 for(int i=l;i<r;i++)
#define all(M)			 M.begin(),M.end()
#define v(x)			 vector<x>
using namespace std;
int main() {
    int t;
    cin >> t;
	while(t--) {
		int n; cin >> n;
		v(int) M(n);
		for(int i = 0;i <= n; i++) M[i] = i + 1;
		do {
			cout(M,n);
			cout << " ";
		} while (next_permutation(all(M)));
		cout << endl;
	}
}