#include <bits/stdc++.h>
using namespace std;

void merge(int array[], int left, int mid,int right)
{
	int leftArray[mid - left + 1],
		rightArray[right - mid];

	for (auto i = 0; i < mid - left + 1; i++) leftArray[i] = array[left + i];
	for (auto j = 0; j < right - mid; j++) rightArray[j] = array[mid + 1 + j];

	auto arrayOne = 0, arrayTwo = 0;
	int mergedArray = left;

	while (arrayOne < mid - left + 1 && arrayTwo < right - mid) {
		if (leftArray[arrayOne] <= rightArray[arrayTwo]) {
			array[mergedArray] = leftArray[arrayOne];
			arrayOne++;
		}
		else {
			array[mergedArray] = rightArray[arrayTwo];
			arrayTwo++;
		}
		mergedArray++;
	}

	while (arrayOne < mid - left + 1) {
		array[mergedArray] = leftArray[arrayOne];
		arrayOne++;
		mergedArray++;
	}

	while (arrayTwo < right - mid) {
		array[mergedArray] = rightArray[arrayTwo];
		arrayTwo++;
		mergedArray++;
	}
}

void mergeSort(int array[], int begin, int end) {
	if (begin >= end)
		return;

	int mid = begin + (end - begin) / 2;
	mergeSort(array, begin, mid);
	mergeSort(array, mid + 1, end);
	merge(array, begin, mid, end);
}

void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++) cout << A[i] << " ";
	cout << endl;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int arr[n+6];
        for(int i = 1; i <= n; i++) cin >> arr[i];
	    mergeSort(arr, 0, n);

	    printArray(arr, n);
    }
	return 0;
}
/*độ phức tạp thuật toán: O(t*n*log(n))*/