#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void in_bo_3(int a[], int n) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            for (k = j + 1; k < n; k++) {
                if ((a[i] + a[j] + a[k]) % 25 == 0) {
                    cout << a[i] << " " << a[j] << " " << a[k] << endl;
                }
            }
        }
    }
}

int main() {
    const int N = 10;
    int a[N], i;
    srand(time(NULL));
    for (i = 0; i < N; i++) {
        a[i] = rand() % 50;
        cout << a[i] << " ";
    }
    cout << endl;
    in_bo_3(a, N);
    return 0;
}
