#include<bits/stdc++.h>
using namespace std;

bool check(char s) {
    if(s == 'A' || s == 'E') return true;
    else return false;
}

void sinhChuCai(void) {
    
}
int main() {
    char a[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    char c;
    cin >> c;
    
    if(c < 65 || c > 72) cout << -1 << endl;
    
    vector<char> Arr;
    
    for(int i = 0; i <= c - 97; i++) {
        Arr.push_back(a[i]);
        if(c == a[i]) break;
    }

    return 0;
}