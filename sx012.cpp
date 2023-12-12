#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], long long n)
{
    bool swapped;
    for (int i = 1; i <= n; i++) {
        swapped = false;
        for (int j = 1; j <= n - i; j++) {
            if (arr[j] >= arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        int a[n + 6];
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1);
        for(int i = 1; i <= n; i++) cout << a[i] << " ";
        cout << endl;
    }
}