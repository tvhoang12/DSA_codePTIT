#include<bits/stdc++.h>
using namespace std;

bool checkIncrease(int a[], int left, int right) {
    if(a[left] > a[left - 1] && a[right] < a[right + 1])
    return 1;
}

bool checkSorted(int arr[], int left, int right) {
    for(int i = left; i <= right; i++) {
        if(abs(arr[i] - arr[i + 1]) != 1) return 0;
    }
    return 1;
}

int main() {
    int n; cin >> n;
    int a[n+ 5];
    int ok = 0;
    for(int i = 1; i <= n; i++) cin >> a[i];
    int left = n/2, right = n - n/2 + 1;
    while(left >= 0) {
        if(checkSorted(a, left, right)) {
            ok = 1;
            if(checkIncrease()) {

            }
        }
        else {
            swap(a[left], a[right]);
            if
        }
    }
}