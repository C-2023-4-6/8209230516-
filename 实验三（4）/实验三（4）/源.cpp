#include"��ͷ.h"//�����ﲻ��include"mytriangle.cpp"���������ʾ�ظ����壻
#include<iostream>
using namespace std;
int main()
{
	double side1, side2, side3; double square;
	cout << "�����������ε������߳���" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3))
	{
		square = _area(side1, side2, side3);
		cout << "�����ε����Ϊ��" << square << endl;
	}
	else
		cout << "�����߹�����������" << endl;
}
