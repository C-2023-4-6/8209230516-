#include<iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if (char(a) >= 065)
	{
		cout << int(a) << endl;
	}
	else
	cout << char(a - 32) << endl;
	return 0;
}