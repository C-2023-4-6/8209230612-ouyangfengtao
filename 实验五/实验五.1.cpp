#include<iostream>
using namespace std;
class Time             
{
private:             
		int hour=0;
	int minute=0;
	int sec=0;
public:
	void in(){
		cin >> hour;		
		cin >> minute;
		cin >> sec;
	}
	void out() {

	cout <<hour << ":" << minute << ":" <<sec << endl;

}
};
int main()
{
	Time t1; 
	t1.in();
	t1.out();
}