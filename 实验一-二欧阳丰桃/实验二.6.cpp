#include<iostream>
using namespace std;
int a, b,c,d;
int main() {
	cin >> a >> b;
	d = a * b;
	for (;;) {
		c = a % b;
		if (c == 0) {
			cout <<"最大公约数为"<< b<<endl;
			cout << "最小公倍数为" << d/b<<endl;
			break;
		}
		a = b; b = c;
	}
	
}