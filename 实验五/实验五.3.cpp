#include<iostream>
using namespace std;
class square {
private:double length;
	   double width;
	   double height;
public:void in() {
	cout << "please input length,width,height:";
	cin >> length >> width >> height;
}
	  double cal() {
		  return length * width * height;
	  }
	  void out() {
		  if (cal() == 0) cout << "error";
		  else
		  cout<<"the volume is:" << cal() << endl;
	  }
};
 
int main() {
	square square1, square2, square3;
	square1.in();
	square1.out();
	square2.in();
	square2.out();
	square3.in();
	square3.out();
}