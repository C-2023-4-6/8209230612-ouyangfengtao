#include<iostream>
using namespace std;
double x, y;
int i;
int main(){
	cin >> i;
	for (; i >= 1; i--) {
		cin >> x;
		if (x>=0&&x<1)y = 3 - (2 * x);
		if (x>=1&&x<5) y = 2 / (4 * x) + 1;
		if (x>=5&&x<10)y = x * x;
		cout << y<<endl;
	}
}