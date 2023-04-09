#include <bits/stdc++.h>
using namespace std;
int main()
{
int N; cin >> N;
int a[N];
for (int i = 0; i < N; ++i) cin >> a[i];
int sum = 0;
int min = a[0], max = a[0];
for (int i = 0; i < N; ++i) {
    sum+=a[i];
    if(a[i] < min) min = a[i];
    if(a[i] > max) max = a[i];
}
double average = sum*1.0/N;
cout << average << endl << min << endl << max << endl;
return 0;
}
