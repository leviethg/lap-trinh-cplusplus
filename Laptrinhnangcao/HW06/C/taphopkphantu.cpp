#include <iostream>
using namespace std;

void liet_ke_tap_hop_do_dai_k(int n, int k, string tu="") {
    if (k == 0) {
        cout << tu << endl;
        return;
    }
    char bat_dau = tu.empty() ? 'a' : tu.back() + 1;
    for (char c = bat_dau; c < ('a' + n); c++) {
        liet_ke_tap_hop_do_dai_k(n, k-1, tu + c);
    }
}

int main() {
    int n, k;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap k: ";
    cin >> k;
    liet_ke_tap_hop_do_dai_k(n, k);
    return 0;
}
