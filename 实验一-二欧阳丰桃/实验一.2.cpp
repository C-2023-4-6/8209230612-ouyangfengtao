#include<iostream>
using namespace std;
int main() {
	int r, h;
	double  V, u = 3.1415926;
	cin >> r >> h;
	V = u * r * r * h * 1 / 3;
	printf_s("%0.4lf", V);
}