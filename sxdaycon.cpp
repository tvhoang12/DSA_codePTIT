#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n) {
    int left = 1, right;
    for(int i = 1; i <= n - 1; i++) {
        int jmin = i;
        for(long long j = i; j <= n; j++) {
            if(a[j] < a[jmin]) {
                jmin = j;
            }
        } 
        if(jmin != i) {
        swap(a[jmin], a[i]);
        }
    }
} 

int main() {

}