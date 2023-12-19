#include<iostream>
using namespace std;
int yin(int a, int b)
{
	int j;
	for (j = a > b ? a : b; a % j != 0 || b % j != 0; j--)
		  ;
	cout << "m,n的最大公因数为：" << j << endl;
	return 0;
}
int bei(int a, int b)
{
	int j;
	for (j = a < b ? a : b; j % a != 0 || j % b != 0; j++)
		;
	cout << "m,n的最小公倍数为：" << j << endl;
	return 0;
}

int main()
{
	int m, n,k;
	cout << "请输入m的值：" << endl;
	cin >> m;
	cout << "请输入n的值：" << endl;
	cin >> n;
	yin(m, n);
	bei(m, n);
	
}