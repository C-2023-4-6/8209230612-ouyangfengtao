#include<iostream>
using namespace std;
double a, x,i,xn;
int main() {
	cin >> a;
	i = a;
	if (a < 0)a = -a;
	x = a;
		for (;;) {
			xn = (x + a / x) / 2;
			if (xn - x < 1e-10 && xn - x>-1e-10) {
				cout << xn; break;
			}
			x = xn;
		}
		if (i < 0)cout << "i";
	}
