#include <iostream>
#include <string>
using namespace std;
int parseHex(const char* hexString) {
	int s = 0;
	int a = strlen(hexString);
	for (int i = 0; i < a; i++) {
		if (hexString[a - 1 - i] <= '9' && hexString[a - 1 - i] >= '0')
			s += (hexString[a - 1 - i] - 48) * pow(16, i);
		else if (hexString[a - 1 - i] == 'A')
			s += 10 * pow(16, i);
		else if (hexString[a - 1 - i] == 'B')
			s +=11 * pow(16, i);
		else if (hexString[a - 1 - i] == 'C')
			s += 12 * pow(16, i);
		else if (hexString[a - 1 - i] == 'D')
			s += 13 * pow(16, i);
		else if (hexString[a - 1 - i] == 'E')
			s += 14 * pow(16, i);
		else if (hexString[a - 1 - i] == 'F')
			s +=  15 * pow(16, i);
	}
	return s;
}
int main() {
	char a[10];
	cin >> a;
	cout << parseHex(a);
}