#include<iostream>
using namespace std;
class Point {
private:int x; int y;
public:Point() {
	x = 60;
	y = 80;
}
	  void setPoint(int i, int j) {
		  x = 60 + i;
		  y = 80 + j;
	  }
	  void display() {
		  cout << "(" << x << "," << y<<")";
		  
	  }
};
int main() {
	Point a1;
	int a, b;
	cin >> a >> b;
	a1.setPoint(a, b);
	a1.display();
}