#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " <string1> <string2>" << endl;
        return 1;
    }

    const char* str1 = argv[1];
    const char* str2 = argv[2];
    int count = 0;
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    for (int i = 0; i <= len2 - len1; i++) {
        if (strncmp(str1, str2 + i, len1) == 0) {
            count++;
        }
    }

    cout << "The first string appears " << count << " times in the second string." << endl;

    return 0;
}
