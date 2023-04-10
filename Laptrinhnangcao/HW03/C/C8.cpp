#include <bits/stdc++.h>
using namespace std;
void triple(int& n){ n = 3*n; }
int main()
{
    //y tuong don gian: ap dung bat dang thuc hoan vi
int N; cin >> N;
int p[N], cs[N];
for (int i = 0; i < N; ++i) cin >> p[i];
for (int i = 0; i < N; ++i) cs[i] = i+1;
long long tongthoigian = 0;
for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
        if (p[j] < p[i]) {
                int temp = p[i]; p[i] = p[j]; p[j] = temp;
                temp = cs[i]; cs[i] = cs[j]; cs[j] = temp;
        }
    }
}

for (int i = 1; i <= N - 1; ++i) {
    tongthoigian += (N-i)*p[i];
}

cout << tongthoigian << endl;
for (int i = 0; i < N; ++i) {
    cout << cs[i] << " ";
}

return 0;}
