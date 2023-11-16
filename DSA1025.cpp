//dat ten 2
#include<bits/stdc++.h>
using namespace std;

char word[20] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L' ,'M', 'N', 'O'};
int n, k, a[20];

void nextCombinationBacktrack(int i) {
    for(int j = a[i - 1] + 1; j <= n - k + i; j ++) {
        a[i] = j;
        if(i == k) {
            for(int z = 1; z <= k; z++) {
                cout << word[a[z] - 1];
            }
            cout << endl;
        }
        else {
            nextCombinationBacktrack(i + 1);
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;
        nextCombinationBacktrack(1);
    }
    return 0;
}