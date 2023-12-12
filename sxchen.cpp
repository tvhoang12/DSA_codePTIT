#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    vector<vector<int>> B;

    int i, key, j;
    for (i = 0; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        vector<int> X;
        for(int k = 0; k <= i; k++) X.push_back(arr[k]);
        B.push_back(X);
    }
    for(int i = B.size() - 1; i >= 0; i--) {
        cout << "Buoc " << i  << ": ";

        for(int j = 0; j < n; j++) {
            cout << B[i][j] << " ";
        }
        n--;
        cout << endl;
    }
}
int main() {
    int n; cin >> n;
    int a[n+6];
    for(int i = 0; i < n; i++) cin >> a[i];
    insertionSort(a, n);
} 