#include<iostream>
using namespace std;
void B(int& a, int& b) {
	int d, c;
	d = a * b;
	for (;;) {
		c = a % b;
		if (c == 0) {
			cout << "最大公约数为" << b << endl;
			cout << "最小公倍数为" << d / b << endl;
			break;
		}
		a = b; b = c;
	}
}
int main() {
	int m, n;
	cin >> m >> n;
	B(m, n);
}
		
			
		

