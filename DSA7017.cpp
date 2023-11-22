#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,r) for(ll i=a;i<=r;i++)
#define F(i,a,b) for(ll i=a;i>=b;i--)
#define l() length()
int main()
{
	//freopen("in.inp","r",stdin);
	int T; cin>>T;
	while(T--)
	{
		int n;
		cin >> n;
		pair<int, int>a[n+1];
        int b;
		f(i,1,n)
		{
			a[i].first = i;
			cin >> b;
			a[i].second = b;
		}
		
		//phan tu nho hon ben phai(lv->number)
		map<int, int> v;// first: vi tri goc, second: gia tri nho gan no
		stack<int> k;
		F(i, n, 1)
		{
			while(!k.empty() && a[i].second <= k.top()) k.pop();
			if(k.empty()) v[a[i].first] = -1;
			else{
				v[a[i].first] = k.top();
			}
			k.push(a[i].second);
		}
		//phan tu lon hon ben phai(num->lv)
		int c[n + 1];// day da chuyen doi lan 1, tra ve vi tri;
		stack<pair<int, int>> d;
		F(i,n,1)
		{
			while(!d.empty() && a[i].second >= d.top().second) d.pop();
			if(d.empty()) c[i] = -1;
			else
			{
				c[i] = d.top().first;
			}
			d.push(a[i]);
		}
		f(i,1,n)
		{
			if(c[i]==-1) cout << -1 << ' ';
			else cout << v[c[i]] << ' ';
		}
		cout << endl;
	}
	return 0;
}
