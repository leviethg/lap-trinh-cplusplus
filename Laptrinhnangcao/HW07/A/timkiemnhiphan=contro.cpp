#include <iostream>
using namespace std;

int* binary_search(int* arr, int left, int right, int key) {
    if (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return &arr[mid];
        }
        if (arr[mid] > key) {
            return binary_search(arr, left, mid - 1, key);
        }
        return binary_search(arr, mid + 1, right, key);
    }
    return nullptr;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int* ptr = binary_search(arr, 0, n - 1, key);
    if (ptr != nullptr) {
        cout << "Element found at index: " << ptr - arr << endl;
    } else {
        cout << "Element not found!" << endl;
    }
    return 0;
}
