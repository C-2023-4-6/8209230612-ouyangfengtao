#pragma once
//student.h  //           (����ͷ�ļ����ڴ��ļ��н����������)
#include <iostream>
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int n, string na, char s);
private:
	int num=0;
	string name;
	char sex;
};