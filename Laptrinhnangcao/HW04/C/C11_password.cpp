#include <bits/stdc++.h>
using namespace std;
int main()
{
int n; cin >> n;
string s[n];
for (int i = 0; i < n; ++i) cin >> s[i];
for (int i = 0; i < n; ++i) {
        int m = s[i].size();
    for (int j = i + 1; j < n; ++j) {
        if (s[j].size() == m) {
            bool thu = true;
            for (int k = 0; k <= m/2; ++k) {
                if (s[i][k] != s[j][m-1-k]) {
                    thu = false;
                    break;
                }

            }
        if (thu) {cout << m << " " << s[i][m/2]; }
        }
    }
}

return 0;}
