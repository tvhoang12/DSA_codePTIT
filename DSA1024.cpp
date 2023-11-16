#include<bits/stdc++.h>
using namespace std;

int n, k, b[35];
vector<string> vs;

void printArray() {
    for(int i = 1; i <= n; i++) {
        cout << vs[b[i] - 1] << " ";
    }
    cout << endl;
}

void backTrack(int i) {
    for(int j = b[i - 1] + 1; j <= vs.size() - k + i; j++) {
        b[i] = j;
        if(i == k) printArray();
        else backTrack(i + 1);
    }
}

int main() {
    cin >> n >> k;
    map<string, bool> name;
    string s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        name[s] = 1;
    }
    for(auto &i : name) vs.push_back(i.first);
    backTrack(1);
}