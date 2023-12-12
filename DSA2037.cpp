#include<bits/stdc++.h>
using namespace std;

vector<int> a, b;
vector<vector<int>> result;
int n, p;

bool isPrime(int n) {
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }

    return true;
}

void backTrack(int i) {
    for(int j = 0; j <= 1; j++) {
        if(j == 1) {
            b.push_back(a[i]);
        }
        if(i == 0) {
            int sum = 0;
            for(int i : b) sum += i;
            if(isPrime(sum)) result.push_back(b);
        }
        else backTrack(i - 1);
        if(j == 1) b.pop_back();
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        a.clear();
        b.clear();
        result.clear();
        cin >> n;
        for(int i = 1; i <= n; i++) {
            int x; cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());

        backTrack(n - 1);
        sort(result.begin(), result.end());

        for(int i = 0; i < result.size(); i++) {
            for(int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
}