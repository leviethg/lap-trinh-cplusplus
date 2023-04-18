#include <bits/stdc++.h>
using namespace std;
int count_even(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}



int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Dem so so chan trong 5 phan tu dau tien
    int count1 = count_even(arr, 5);
    cout << "So so chan trong 5 phan tu dau tien la: " << count1 << endl;

    // Dem so so chan trong 5 phan tu cuoi cung
    int count2 = count_even(arr + size - 5, 5);
    cout << "So so chan trong 5 phan tu cuoi cung la: " << count2 << endl;


return 0;
}

