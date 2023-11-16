#include<bits/stdc++.h>
using namespace std;

int main() {
    int w, number_cow;
    cin >> w >> number_cow;
    
    int weight[number_cow + 1], l[number_cow + 1][w + 1];
    memset(l, 0, sizeof(l));
    
    for(int i = 1; i <= number_cow; i++) cin >> weight[i];
    
    for(int i = 1; i <= number_cow; i++) {
        for(int j = 1; j <= w; j ++) {
            if(weight[i] <= j) 
                l[i][j] = max(l[i - 1][j], l[i - 1][j - weight[i]] + weight[i]);
            else 
                l[i][j] = l[i - 1][j];
        }
    }
    
    cout << l[number_cow][w] << endl;

    return 0;
}