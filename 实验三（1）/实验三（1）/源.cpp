#include<iostream>
using namespace std;
int yin(int a, int b)
{
	int j;
	for (j = a > b ? a : b; a % j != 0 || b % j != 0; j--)
		  ;
	cout << "m,n���������Ϊ��" << j << endl;
	return 0;
}
int bei(int a, int b)
{
	int j;
	for (j = a < b ? a : b; j % a != 0 || j % b != 0; j++)
		;
	cout << "m,n����С������Ϊ��" << j << endl;
	return 0;
}

int main()
{
	int m, n,k;
	cout << "������m��ֵ��" << endl;
	cin >> m;
	cout << "������n��ֵ��" << endl;
	cin >> n;
	yin(m, n);
	bei(m, n);
	
}