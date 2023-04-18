#include <bits/stdc++.h>
using namespace std;
void f (int a[], int n) {
cout << sizeof(a);

}

int main() {
int n = 25;
int a[n];
cout << sizeof(a);
cout << endl;
f(a, n);

return 0;
}

/* khi in kích thước của biến a trong hàm f(),
 nó sẽ in ra kích thước của một con trỏ,
 có thể là 4 hoặc 8 byte tùy thuộc vào hệ điều hành và kiến trúc của máy tính.
 Trong trường hợp này, trên nền tảng 64-bit, kích thước của một con trỏ là 8 byte, do đó hàm f() in ra giá trị 8. */
