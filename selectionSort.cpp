#include<bits/stdc++.h>
using namespace std;

void selectionSort(long long a[], long long n) {
    for(long long i = 1; i <= n - 1; i++) {
        long long jmin = i;
        for(long long j = i; j <= n; j++) {
            if(a[j] < a[jmin]) jmin = j;
        }
        if(jmin != i) {
        swap(a[jmin], a[i]);
        }
    }
} 

int main() {
    // Sử dụng time(0) để khởi tạo seed cho hàm rand
    srand(static_cast<unsigned int>(time(0)));
    long long randomArray[100000];

    for (long long i = 0; i < 100000; ++i) {
        randomArray[i] = rand() % 1000 + 1; // Số nguyên ngẫu nhiên từ 1 đến 1000
    }
    auto start_time = chrono::high_resolution_clock::now();
    selectionSort(randomArray, 100000);
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time);
    cout << "thoi gian chay: " << duration.count() << " microseconds\n";
    return 0;
}

