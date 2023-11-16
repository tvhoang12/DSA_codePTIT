#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n) {
    for(int i = 1; i <= n -1; i++) {
        int jmin = i;
        for(int j = i; j <= n; j++) {
            if(a[j] < a[jmin]) jmin = j;
        }
        swap(a[jmin], a[i]);
    }
}
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        selectionSort(a, n);
        if(n % 2 == 0) {
        for(int i = 1; i <= n/2; i++) {
            cout << a[n - i + 1] << " " << a[i] << " ";
        }
        }
        else {
            for(int i = 1; i <= n/2; i++) {
                cout << a[n - i + 1] << " " << a[i] << " ";
        }
        cout << a[n/2+1];
        }
        cout << endl;
    }
}