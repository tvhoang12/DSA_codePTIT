#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        getline(cin, s);
        vector<string> a;
        stack<string> st;
        stringstream ss(s);
        string word;

        while(ss >> word) {
            a.push_back(word);
        }
        for(int i = a.size() - 1; i >= 0; i--) cout << a[i] << " ";
        cout << endl;
    }
}