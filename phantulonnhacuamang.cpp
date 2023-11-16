#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int k, int n) {
    for(int i = 1; i <= k; i++) {
        for(int j = 1; j <= n-i; j++) {
            if(a[j] > a[j+1]) swap(a[j], a[j+1]);
        }
        cout << a[n - i + 1] << " ";
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(int i = 1; i <= n; i ++) cin >> a[i];

        bubbleSort(a, k, n);
    }
    
}