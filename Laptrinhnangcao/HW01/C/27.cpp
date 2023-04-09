#include <bits/stdc++.h>
using namespace std;
int main()
{
int N;
while (1) {
    cin >> N;
    if (N != -1) {if (N % 5 == 0) cout << N/5 << endl;
    else cout << -1 << endl;
}
    else {cout << "Bye"; break;}
}

return 0;
}
