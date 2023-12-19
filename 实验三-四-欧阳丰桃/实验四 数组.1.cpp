#include<iostream>
using namespace std;
int main(){
	int b = 0;
	int a[15];
	for (int i = 0; i < 10; i++) {
		int num=0;
		cin >>a[i];
		int j;
		for (j = 0; j < i; j++) {
			
			if (a[i] == a[j]) { num++; break; }
			
		}
		if(num==0)
		cout << a[i] << " ";
	}
	
}