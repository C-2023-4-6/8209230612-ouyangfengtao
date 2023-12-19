#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << a + b + c<<endl;
		if (a == b || a == c || b == c)
			cout << "是等腰三角形"<<endl;
		else cout << "不是等腰三角形"<<endl;
	}
	else cout << "不是三角形" << endl;
}