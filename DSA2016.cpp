//sap xep quan hau 1
#include<bits/stdc++.h>
using namespace std;

int N, a[100], cot[100], cheo1[100], cheo2[100];
int cnt;

void backTrack(int i) {
    for(int j = 1; j <= N; j++) {
        if(cot[j] == 1 && cheo1[i - j + N] == 1 && cheo2[i + j - 1] == 1) {
            a[i] = j;
            cot[j] = cheo1[i - j + N] = cheo2[i + j - 1] = 0;
            if(i == N) {
                ++ cnt;
            }
            else {
                backTrack(i + 1);
            }

            cot[j] = cheo1[i - j + N] = cheo2[i + j - 1] = 1;
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> N;
        cnt  = 0;
        for(int i = 1; i <= 99; i++) {
            cot[i] = cheo1[i] = cheo2[i] = 1;
        }
        backTrack(1);
        cout << cnt << endl;
    }
}