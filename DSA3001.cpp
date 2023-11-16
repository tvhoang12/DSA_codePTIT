#include<bits/stdc++.h>
using namespace std;


int main() {
    int a[] = { 1,2,5,10,20,50,100,200,500,1000 };
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int fx = 0;
        int i = 9;
        while(n > 0) {
            while(n >= a[i]) {
                fx++;
                n -= a[i];
            }
            --i;
        }
        cout << fx << endl;
        // while(n > 0) {
        //     if(n >= a[i]) {
        //         while(n > a[i]) {
        //             n -= a[i];
        //             fx++;
        //         }
        //     }
        //     else --i;
        // }
        // cout << fx << endl;
    }
}