#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int n;	cin>>n;
	ll a[105];
	vector<vector<int>> B;
	
	for(int i = 0;i < n; i++) cin >> a[i];
	
	for(int i = 0; i < n-1; i++) {
		int jmin = i;
	
		for(int j = i+1; j < n; j++) {
			if(a[j] < a[jmin]) {
				jmin=j;
			}
		}
		swap(a[i],a[jmin]);
        vector<int> X;
		for(int j = 0; j < n; j++) X.push_back(a[j]);
		B.push_back(X);
	}
	
    for(int i = B.size() - 1; i >= 0; i--) {
        cout << "Buoc " << i + 1 << ": ";
        
		for(int j = 0; j < n; j++) {
            cout << B[i][j] << " ";
        }
            cout << endl;
        }
}