#include<iostream>
using namespace std;
int main()
{
	cout << "�����������εı߳���";
	
	int a, b, c, d;
	cin >> a >> b >> c;
	if ((a + b > c) && (a + c > b) &&( b + c > a))
	{
		d = a + b + c;
		if (a == b || a == c || b == c)
		{
			cout << "��������Ϊ����������";
		}
		cout << "�����ε��ܳ�Ϊ" << d << endl;
	}

	else {
		cout << "������������";
	}
	return 0;
}