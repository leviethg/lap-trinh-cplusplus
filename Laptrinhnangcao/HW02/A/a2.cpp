#include <bits/stdc++.h>
using namespace std;
int main() {
int k; cin >>k;
while (k) {
if(k%3==0) k /= 3;
else {break;}
}
cout << k;

return 0;
}
