#include<iostream>
using namespace std;
int main()   //C���Գ���Ҫ�˽�
{
    int a[] = { 1,2,3 };
    int* p, i;
    p = a;    //������a�׵�ַ�͸�p
    for (i = 0; i < 3; i++)
  printf_s("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));
}