#include<iostream>
#define �� 3.1415926
using namespace std;
int main()
{
	int h;//Բ׶�ĸ�
	int r;//Բ׶�ĵ���Բ�뾶
	cout << "������Բ׶�ĸ�" << endl;
	cin >> h;
	cout << "���������Բ�İ뾶" << endl;
	cin >> r;
	float v = ( h * r * r * ��)/3;//Բ׶�����
	
	cout << "Բ׶�����v=" << v << endl;
	return 0;
}