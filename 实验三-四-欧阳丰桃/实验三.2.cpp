#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int b)
{
	for (int a = 2; a <=b/2; a++)
	{
		if (b % a == 0)
		{
			return false;
		}
	}
	return true;
}
void pro(int num)
{
	 int LINE = 10;
	int count = 0;
	int number = 2;
	for (;count<num;)
	{
		if (is_prime(number))
		{
			count++;
			if (count % LINE == 0)
			{
				cout << "       " << number << endl;
			}
			else
				cout << "       " << number;
		}
		number++;
	}
}
int main()
{
	pro(200);

	return 0;
}

