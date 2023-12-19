#include <iostream>
#include <cstring>
using namespace std;
void count(const char s[], int counts[]) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        char c = tolower(s[i]);
        if (c >= 'a' && c <= 'z') {
            counts[c - 'a']++;
        }
    }
}

int main() {
    int counts[26] = { 0 };
    char s[100];

    cin.getline(s, 100);
    count(s, counts);

cout << "字母出现的次数：" << endl;
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            char letter = 'a' + i;
            cout << letter << ": " << counts[i] << "times" << endl;
        }
    }

    return 0;
}