#include <iostream>

using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void findAllSequences(int sum, int arr[], int len, int kaka) {
    if (sum == 0) {
        printArray(arr, len);
        return;
    }
    for (int i = kaka; i <= sum; i++) {
        arr[len] = i;
        findAllSequences(sum - i, arr, len + 1, i);
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen duong: ";
    cin >> n;
    int arr[n];
    findAllSequences(n, arr, 0, 1);
    return 0;
}
