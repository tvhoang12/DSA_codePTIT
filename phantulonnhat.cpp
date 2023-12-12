#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int left = low;
    int right = high - 1;
    while(true){
        while(left <= right && arr[left] < pivot) left++;
        while(right >= left && arr[right] > pivot) right--;
        if (left >= right) break;
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    swap(arr[left], arr[high]);
    return left;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int k; cin >> k; 
        int a[n];
        for(int i = 1; i <= n; i++) cin >> a[n];
        quickSort(a,1,n);
        for(int i = 0; i < k; i++) cout << a[n-i] << " ";

    }
}