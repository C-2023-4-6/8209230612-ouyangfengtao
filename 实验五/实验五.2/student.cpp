//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
using namespace std;
#include "student.h"   //��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value(int n,string na,char s) {
    num = n;
    name = na;
    sex = s;
}
