#include<bits/stdc++.h>
using namespace std;

vector<string> answer;
int n;
int a[15][15];

void dungeon(int i, int j, string s) {
    if(i == n && j == n) {
        answer.push_back(s);
        return;
    }
    if(i < n && a[i + 1][j] == 1) dungeon(i + 1, j, s + "D");

    if(j < n && a[i][j + 1] == 1) dungeon(i, j + 1, s + "R");
}

int main() {
    int t; cin >> t;
    while(t--) {
        answer.clear();
        cin >> n;
        
        for(int i = 1; i <= n; i++) 
            for(int j = 1; j <= n; j++) cin >> a[i][j];

        if(a[1][1] == 1) {
            dungeon(1, 1, "");
        }
        if(answer.size() == 0) cout << -1 << endl;
        else {
            for(int i = 0; i < answer.size(); i++) cout << answer[i] << " ";
        }cout << endl;
    }
}