#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int f;//�����¶�
	int t;//�����¶�
	cout << "�����뻪���¶�" << endl;
	cin >> f  ;
	t = (f - 32) / 1.8;
	cout << "��Ӧ�������¶�Ϊ" << t <<fixed<<setprecision(2)<< "��" << endl;
	return 0;
}