#include <iostream>
using namespace std;

char* weird_string() {
   char c[] = "123345";
   return c;
}
int main() {
    cout << weird_string();
    return 0;
}

/* khi một con trỏ trỏ đến một vùng bộ nhớ không còn hợp lệ (trong trường hợp này là mảng c).
Khi hàm weird_string() kết thúc, biến địa phương c sẽ bị thu hồi và con trỏ trả về sẽ trỏ đến một vùng nhớ không được phép truy cập,
dẫn đến kết quả không xác định.
Khi chạy chương trình, trình biên dịch sẽ cảnh báo về việc trả về địa chỉ của biến địa phương,
và kết quả trả về của hàm main sẽ là một địa chỉ không hợp lệ. */
