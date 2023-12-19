#include<iostream>
using namespace std;
int num = 0, space = 0, word = 0, oth = 0;//数字 空格 字母 其他
int main() {
    char a;
    while (a = getchar() && a != '\n')
    {
        cout << a;
        if (a >= '0' && a <= '9')
      
            num++;
        
        else if (a == ' ')
        
            space++;
        
        else if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
        
            word++;
        
        else
        
            oth++;
        
    }
    cout << num << endl;
    cout << space << endl;
    cout << word << endl;
    cout << oth << endl;
} 
  