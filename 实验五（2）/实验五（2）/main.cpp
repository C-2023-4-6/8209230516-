#include <iostream>   //��������ͷ�ļ���������
using namespace std;
#include "student.h"
int main()
{
	Student stud;                //�������
	cout << "������ѧ����ѧ�ţ��������Ա�";
	stud.set_value();
	stud.display();              //ִ��stud�����display����
	return 0;
}