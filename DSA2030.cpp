#include<bits/stdc++.h>
using namespace std;

int n, a[100], k, ok;

void ktao() {
    for(int i = 1; i <= k; i++) {
        a[i] = 1;
    }
}

void combinationGenerator() {
    int i = k;
    while(i >= 1 && a[i] == n) {
        --i;
    }
    if(i == 0) {
        ok = 0;
    }
    else {
        a[i]++;
        for(int j = i + 1; j <= k; j++) {
            a[j] = a[i];
        }
    }
}

int main() {
    char s;
    cin >> s;
    cin >> k;
    n = s - 'A' + 1;
    ok = 1;
    ktao();
    do {
        for(int i = 1; i <= k; i++) {
            cout << (char)('A' + a[i] - 1);
        }
        cout << endl;
        combinationGenerator();
    }while(ok);
}