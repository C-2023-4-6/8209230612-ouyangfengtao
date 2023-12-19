#include<iostream>
using namespace std;
int a,i,sum;
int main() {
	a = 1;
	for (i=1; sum <=100;i++) {
		a *= 2;
		sum += a;
	}
	cout << 0.8 * sum / (i-1);
}