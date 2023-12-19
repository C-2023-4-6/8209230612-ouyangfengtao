#include<iostream>
using namespace std;
void anfk(int a[],int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = i + 1; j < len; j++) {
			if (a[j] < a[i]) {
				int t;
				t = a[i]; a[i] = a[j]; a[j] = t;
			}
		}
	}
}
int main() {
	int a;
	cin >> a;
	int* p = new int[a];
	for (int i = 0; i < a; i++) {
		cin >> *(p + i);
	}
	anfk(p, a);
	for (int j = 0; j < a; j++) {
		cout << *(p + j)<<" ";
	}
	delete[]p;
}