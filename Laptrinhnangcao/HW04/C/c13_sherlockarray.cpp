#include <bits/stdc++.h>
using namespace std;
int main()
{
int T; cin >> T;
for (int i = 0; i < T; ++i) {
    int n; cin >> n;
    int a[n];
    for (int j = 0; j < n; ++j) cin >> a[j];
    int sum[n]; sum[0] = a[0];
    for (int k = 1; k < n; ++k) {
        sum[k] = sum[k-1] + a[k];
    }
    for (int k = 0; k < n; ++k) {
        if (k == 0 && sum[n-1] == 0) {cout << "YES" << endl; return 0; }
        if (k == n-1 && sum[n-2] == 0) {cout << "YES" << endl; return 0; }
        if (k > 0 && k < n-1) {
            if (sum[k-1] == sum[n-1] - sum[k-1] - a[k]) {cout << "YES" << endl; return 0;}
        }

    }
    cout << "NO" << endl;
}
return 0;}
