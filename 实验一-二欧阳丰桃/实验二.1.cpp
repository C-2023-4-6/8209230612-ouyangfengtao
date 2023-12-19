#include<iostream>
using namespace std;
int main()
{
    char c1;
    printf_s("ÇëÊäÈëÒ»¸ö×Ö·û\n");
    scanf_s("%c", &c1);
    if (c1 >= 'a' && c1 <= 'z')
        printf_s("%c", c1 - 32);
 
    else
        printf_s("%d", c1+1);

    return 0;

}
