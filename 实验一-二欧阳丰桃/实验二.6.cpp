#include<iostream>
using namespace std;
int a, b,c,d;
int main() {
	cin >> a >> b;
	d = a * b;
	for (;;) {
		c = a % b;
		if (c == 0) {
			cout <<"���Լ��Ϊ"<< b<<endl;
			cout << "��С������Ϊ" << d/b<<endl;
			break;
		}
		a = b; b = c;
	}
	
}