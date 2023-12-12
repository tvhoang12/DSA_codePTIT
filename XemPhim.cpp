#include<bits/stdc++.h>
using namespace std;

int w[1000], N, ok, C;
int maxSumWeight = -1;

void  initialization() {
    for(int i = 1; i <= N; i++) {
        w[i] = 0;
    }
}

void binaryGenerator() {
    int i = N;
    while(i >= 1 && w[i] == 1) {
        --i;
        w[i] = 0;
    }
    if(i == 0) {
        ok = 0;
    }
    else {
        w[i] ++;
    }
}

void sumWeight (int weight[]) {
    ok = 1;
    int sumWeight;
    initialization();
    while(ok) {
        for(int i = 1; i <= N; i++) {
            sumWeight += w[i] * weight[i];
        }
        if(sumWeight < C || sumWeight > C) maxSumWeight = max(maxSumWeight, sumWeight);
        else {
            maxSumWeight = sumWeight;
            break;
        }
        binaryGenerator();
    }
    cout << maxSumWeight << endl;
}

int main() {
    cin >> C >> N;
    int weight[N];
    for(int i = 1; i <= N; i++) {
        cin >> weight[i];
    }
    sumWeight(weight);
}