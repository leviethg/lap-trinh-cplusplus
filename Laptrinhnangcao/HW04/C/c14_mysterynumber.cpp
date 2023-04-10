#include <bits/stdc++.h>
using namespace std;
int main()
{
int N; cin >> N;
int A[N], B[N+1];
for (int i = 0; i < N; ++i) cin >> A[i];
for (int i = 0; i < N + 1; ++i) cin >> B[i];
int freq1[101] = {0}, freq2[101] = {0};

for (int i = 0; i < N; ++i) {
    freq1[A[i]]++;
}
for (int i = 0; i < N + 1; ++i) {
    freq2[B[i]]++;
}

for (int i = 0; i < 101; ++i)
{
    if (freq1[i] != freq2[i]) cout << i << endl;
}

return 0;}
