#include <iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
    int i, j;
    int a = strlen(s1);
    int b = strlen(s2);
    for (i = 0; i<b; i++) {

        for (j = 0;j<a && s1[j] == s2[i+j]; j++) {
            if (j == a - 1) {
                return i;
            }             
        }                             
    }return -1;
}
int main() {
    char s1[100], s2[100];
    cin >> s1 >> s2;
    int result = indexof(s1, s2);
    if (result != -1) cout << "s1是s2的子串" << endl;
    else cout << "s1不是s2的子串" << endl;
}
   