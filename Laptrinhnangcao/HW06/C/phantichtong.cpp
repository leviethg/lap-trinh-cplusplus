#include <iostream>
using namespace std;

const int MAX_N = 100;
int a[MAX_N];
int n;

void partition(int sum, int prev) {
    if (sum == n) {
        for (int i = 0; i < prev; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= n - sum; i++) {
        if (i >= prev) {
            a[prev] = i;
            partition(sum + i, prev + 1);
        }
    }
}

int main() {
    cout << "Enter n: ";
    cin >> n;
    partition(0, 0);
    return 0;
}
