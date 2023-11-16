#include<bits/stdc++.h>
using namespace std;

int isPrime(int number) {
    if (number <= 1) {
        return 0;
    }
    if(number == 2) return 1;

    for(int i = 2; i*2 <= number; i++) {
        if(number % i == 0) return 0;
    }
    return 1;
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
    int N; 
    cin >> N;
    int key;
    for(int i = 2; i <= N/2; i++) {
            if(isPrime(N-i) == 1 && isPrime(i) == 1) {
                key = i;
                break;
            }
            else key = -1;
    }

    if(key == -1) cout << -1 << endl;
    else cout << key << " " << N-key << endl;
    }

}
