#include <iostream>
using namespace std;

void hoan_vi_do_dai_k(int n, int k, string tu="") {
	string cac_chu_cai="abcdefghijklmnopqrstuvwxyz";
    if (k == 0) {
        cout << tu << endl;
		return ;
    }
    for (int i = 0; i < n; i++) {
        char chu_cai_moi = cac_chu_cai[i];
        if (tu.find(chu_cai_moi) == string::npos) {
            hoan_vi_do_dai_k(n, k-1, tu+chu_cai_moi);
        }
    }
}

int main() {
    int n, k;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap k: ";
    cin >> k;
    hoan_vi_do_dai_k(n, k);
    return 0;
}

