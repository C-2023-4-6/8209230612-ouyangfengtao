#include<iostream>
using namespace std;
int orn(int day, int remain) {
	if (day == 1)return remain;
	else return orn(day - 1, (remain + 1) * 2);
}
int main() {
	int a, b;
	cin >> a >> b;
	cout<<orn(a, b);
}