#include<bits/stdc++.h>
using namespace std;

int X[100000], Y[100000];
int n;
bool ok = true;

void Nex_Permutation(void) {
    int j = n - 1;
    while (j > 0 && X[j] > X[j+1])
    {
        j--;
    }
    if(j > 0) {
        int k = n;
        while(X[j] > X[k]) k--;
        int t = X[j]; X[j] = X[k] ; X[k] = t;
        int r = j+1, s = n;
        while(r <= s) {
            swap(X[r], X[s]);
            r++; s--;
        }
    }
    else ok = false;
    
}

int main() {

}