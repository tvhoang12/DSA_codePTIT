#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N, S, M;
        cin >> N >> S >> M;
        int day_need;
        day_need = (M * S) / N + 1;
        int day_can_buy = S - S/7;
        if(day_can_buy < day_need) cout << -1 << endl;
        else {
            for(int i = 1; i <= day_can_buy; i++) {
                if(N * i >= M * S) {
                    cout << i << endl;
                    break;
                }
            }
        }
    }

    return 0;
}