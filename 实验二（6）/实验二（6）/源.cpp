#include<iostream>
using namespace std;
int main()
{
	int a, b; 
	cout << "��������ֵa:" << endl;
	cin >> a ;
	cout << "��������ֵb:" << endl;
	cin >> b;
	int c = (a < b ? a : b); int d = (a > b ? a : b);
	while (a % c > 0 || b % c > 0)
	{
		c--;
	}
	
	cout << "a��b�����Լ��Ϊ��" << c << endl;
	while( d%a >0 || d%b >0 )
	{
		d++;
	}
	cout << "a��b����С������Ϊ��" << d << endl;
	return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
	int a, b, c; c = min(a, b);
	cin >> a >> b;
	cout << c;
}*/