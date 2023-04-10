#include <iostream>
using namespace std;

int main() {
    int num;
    int prev_num = -1; // số trước đó để so sánh
    cin >> num;
    int a = num;
    while(num >= 0) { // đọc số cho đến khi gặp số âm đầu tiên
        if(num != prev_num) { // nếu số hiện tại khác số trước đó thì in ra
            cout << num << " ";
            prev_num = num;
        }
        cin >> num;
        a = num; // đọc tiếp số kế tiếp
    }
    cout << a;
    return 0;
}

