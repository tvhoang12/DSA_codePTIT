#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n) {
    int count = 0;
    for(int i = 1; i <= n; i++) {
        int jmin = i;
        for(int j = i; j <= n; j++) {
            if(a[j] < a[jmin]) jmin = j;
        }
        if(jmin != i) {
        swap(a[jmin], a[i]);
        count ++;
        }
    }
    cout << count << endl;
} 
  
void bubbleSort(int arr[], int n)
{
    int count = 0;
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
                count ++;
            }
        }
        if (swapped == false)
            break;
    }
    cout << count << endl;
}
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 1; i <= n; i++) cin >> a[i];
        selectionSort(a,n);
        bubbleSort(a,n);
    }
}