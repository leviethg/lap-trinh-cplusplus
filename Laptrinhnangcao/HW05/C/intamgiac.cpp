#include <iostream>
using namespace std;

void in_dong(int m, int n) {
    int i;
    for (i = 1; i <= m; i++) {
        cout << " ";
    }
    for (i = 1; i <= n; i++) {
        cout << "*";
    }
}

int main() {
    int n, i, j;
    cout << "Nhap so dong: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        in_dong(n - i, 2 * i - 1);
        cout << endl;
    }
    return 0;
}
