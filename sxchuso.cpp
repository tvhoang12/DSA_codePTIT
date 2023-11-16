#include<bits/stdc++.h>

using namespace std;

void insertionsort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void convert(int arr[], int n) 
{
    int tmp[n * 18];
    int dem = 0;
    for (int i = 0; i < n; i++) 
    {
        int num = arr[i];
        while(num > 0){ 
            int cs = num % 10; 
            bool check = false;
            for(int j=0; j < dem; j++)
            {
                if(cs == tmp[j]){
                    check = true;
                    break;  
                } 
            }
            if(!check){
                tmp[dem++] = cs;
            }
            num = num / 10;
        }
    }
    insertionsort(tmp, dem);
    for(int i=0;i<dem;i++){
        cout<<tmp[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        convert(a, n);

    }
}