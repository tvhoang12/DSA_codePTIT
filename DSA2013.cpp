#include<bits/stdc++.h>
using namespace std;

int n, p, sum;
vector<int> primeNumber;
vector<int> a;
vector<vector<int>> result;

bool isPrime(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}

void initializationPrimeArray() {
    for(int i = 2; i <= 200; i++) {
        if(isPrime(i)) {
            primeNumber.push_back(i);
        }
    }
}

void sumaryPrime(int position, int k, int s) {
    for(int i = position; i <= primeNumber.size(); i++) {
        if(k == 1 && s + primeNumber[i] == sum) {
            a.push_back(primeNumber[i]);
            result.push_back(a);
            a.pop_back();
        } else if(k > 1 && s + primeNumber[i] < sum) {
            a.push_back(primeNumber[i]);
            sumaryPrime(i + 1, k - 1, s + primeNumber[i]);
            a.pop_back();
        }
    }
}

int main() {
    initializationPrimeArray();
    int t; cin >> t;
    while(t--) {
        result.clear();
        cin >> n >> p >> sum;
        int position = 0;

        while(primeNumber[position] < p) position++;
        sumaryPrime(position, n, 0);
        
        cout << result.size() << endl;
        for(int i = 0; i < result.size(); i++) {
            for(int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
}
// int main() {
//     initializationPrimeArray();
//     cout << primeNumber[0] << endl;
// }