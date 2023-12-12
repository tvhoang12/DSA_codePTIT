#include<bits/stdc++.h>
using namespace std;

int n = 0, k, ok, combination[1000];

void ktao() {
    for(int i  = 1; i <= k; i++) {
        combination[i] = i;
    }
}

void combinationGenerator() {
    int i = k;
    while(i >= 1 && combination[i] == n - k + i) {
        --i;
    }
    if(i == 0) {
        ok = 0;
    }
    else {
        combination[i] ++;
        for(int j = i + 1; j <= k; j++) {
            combination[j] = combination[j - 1] +1;
        }
    }
}

void checkLap(vector<int> a, int n) {
    for(int i = 1; i <= n; i++) {
        if(a[i] == a[i + 1]) {
            for(int j = i + 1; j <= n; j++) {
                a[j] = a[j + 1];
            }
            n ++;
        }
        else n++;
    }
}

int main() {
    int m;
    cin >> m >> k;
    ok = 1;
    int a[1000];
    vector<int> b;
    for(int i = 1; i <= m; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);

    for(int i = 1; i <= m; i++) {
        b.push_back(a[i]);
        while(a[i] == a[i+1]) i++;
    }
    n = b.size();

    ktao();

    while(ok) {
        for(int i = 1; i <= k; i++) {
            cout << b[combination[i]] << " ";
        }
        cout << endl;
        combinationGenerator();
    }

}