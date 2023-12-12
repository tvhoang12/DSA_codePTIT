#include<bits/stdc++.h>
using namespace std;

int n;

void backTrack (string phatLoc) {
      int k = phatLoc.size();
    if(k == n) {
        if(phatLoc[n - 1] == '6') cout << phatLoc << endl;
        return;
   }
    if(phatLoc[k - 1] == '8') {
        backTrack(phatLoc + "6");
    }
    else {
        if(k < 4) {
            backTrack(phatLoc + '6');
        }
        else if(phatLoc[k - 2] == '8' || phatLoc[k - 3] == '8') {
            backTrack(phatLoc + "6");
        }
        backTrack(phatLoc + "8");
    }
}

int main() {
    cin >> n;
    backTrack("8");

    return 0;
}