#include<iostream>
using namespace std;
int a, b; char c;
int main()
{
    cin >> a >> c >> b;
    if (c == '+')
        cout << a + b;
    else if (c == '-')
        cout << a - b;
    else if (c == '*')
        cout << a * b;
    else if (c == '%')
        cout << a % b;
    else if (c == '/')
    {
        if (b == 0)
            cout << "Wrong";
        else
            cout << a / b;
    }
    else
        cout << "Wrong";
    return 0;
}