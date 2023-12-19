#include<iostream>
using namespace std;
int main() {
	double F, C;
	cin >> F;
	C = 5 * (F - 32) / 9;
	printf_s("%0.2f", C);
	return 0;
}