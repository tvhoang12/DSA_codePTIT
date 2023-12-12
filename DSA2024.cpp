#include<bits/stdc++.h>
using namespace std;

int a[25];
vector<vector<int>> answer;
vector<int> temp;
vector<string> word;
int n;

void subsequenceIncrease(int pos) {
    for(int i = pos + 1; i <= n; i++) {
        if(a[i] > a[pos]) {//điều kiện tăng dần
            temp.push_back(a[i]);
            if(temp.size() > 1) answer.push_back(temp);
            subsequenceIncrease(i);
            temp.pop_back();//xóa phần tử cuối cùng
        }
    }
}

int main() {
    cin >> n;
    a[0] = -1;//để tránh trường hợp tất cả các phần tử đều không thỏa mãn điều kiện
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    subsequenceIncrease(0);

    sort(answer.begin(), answer.end());

    for(int i = 0; i < answer.size(); i++) {
        string s = "";
        for(int j = 0; j < answer[i].size(); j++) {
            s += to_string(answer[i][j]);
            s += " ";
        }
        word.push_back(s);
    }

    sort(word.begin(), word.end());
    for(int i = 0; i < word.size(); i++) {
        cout << word[i] << endl;
    }
}