#include <iostream>
#include <stdlib.h>
using namespace std;
int ngaunhien(int n) {
    return rand()%n;
}
int main() {
    int n; cin >> n;
    cout << ngaunhien(n);

    return 0;
}
