#include<iostream>
using namespace std;
void B(int& a, int& b) {
	int d, c;
	d = a * b;
	for (;;) {
		c = a % b;
		if (c == 0) {
			cout << "���Լ��Ϊ" << b << endl;
			cout << "��С������Ϊ" << d / b << endl;
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
		
			
		

