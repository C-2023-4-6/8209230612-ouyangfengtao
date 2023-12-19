#include<iostream>
#include<cstring>
#define ll long long
using namespace std;
ll sss(const char* s){
ll ans = 0,len = strlen(s);
for (int i = 0; i < len; i++) {
if (s[i] >= 'A' && s[i] <= 'F')
ans += s[i] - 'A' + 10;
if (s[i] >= '0 ' && s[i] <= '9')
ans += s[i] - '0 ';
ans *= 16;
}
return ans / 16; }
int main() {
char s[100]; cin >> s;
cout << sss(s);
}