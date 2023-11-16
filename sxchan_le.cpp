#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n; cin >> n;
    ll a[n+5], b[n + 5];
    
    vector<ll> Odd, Even;
    
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        
        if(a[i] % 2 ==0) {
            Even.push_back(a[i]);
            b[i] = 2;
        }
        else {
            Odd.push_back(a[i]);
            b[i] = 1;
        }
    }
    
    sort(Odd.begin(), Odd.end(), greater<>());
    
    sort(Even.begin(), Even.end());
    long long odd = 0, even = 0;

    for(int i = 1; i <= n; i++) {
        if(b[i] == 1) {
            cout << Odd[odd] << " ";
            odd++;
        }
        else {
            cout << Even[even] << " ";
            even++;
        }
    }
    cout << endl;

    return 0;
}