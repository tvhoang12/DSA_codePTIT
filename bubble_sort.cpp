#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    vector<vector<int>> B;
    bool swapped;
    for (int i = 0; i < n; i++) {
        swapped = false;
        for (int j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) break;
        vector<int> X;
        for(int k = 0; k < n; k++) X.push_back(arr[k]);
        B.push_back(X);

    }
    for(int i = B.size() - 1; i >= 0; i--) {
        cout << "Buoc " << i+1 << ": ";
        for(int j = 0; j < n; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
}
 
int main() {
    int t; cin >> t;
    while(t--) {
    int n; cin >> n;
    int a[n+6];
    for(int i = 0; i < n; i++) cin >> a[i];
    bubbleSort(a, n);
    }
}