#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[30];
vector<string> word_name;

void nextCombinationBackTrack(int i) {
    for(int j = a[i - 1] + 1; j <= word_name.size() - k + i; j++) {
        a[i] = j;
        if(i == k) {
            for(int s = 1; s <= k; s++) cout << word_name[a[s] - 1] << " ";
            cout << endl;
        }
        else nextCombinationBackTrack(i + 1);
    } 
}

int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        word_name.push_back(s);
    }
    
    sort(word_name.begin(), word_name.end());

    for(int i = 1; i < word_name.size(); i++) {
        if(word_name[i] == word_name[i - 1]) {
            word_name.erase(word_name.begin() + i);
            --i;
        }
    }

    nextCombinationBackTrack(1);

    return 0;
}