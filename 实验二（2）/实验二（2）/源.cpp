#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "������x��ֵ";
	cin >> x;
	if (0 < x&&x < 1)
	{
		y = 3 - 2 * x;
	}
	else if (1 <= x&&x < 5)
	{
		y = 1 + 1 / (2 * x);
	}
	else if (5 <= x&&x < 10)
	{
		y = x * x;
	}
	else
		cout << "���ڶ�����Χ��" << endl; 
	
	
	cout << "y=" << y << endl;
	return 0;
}