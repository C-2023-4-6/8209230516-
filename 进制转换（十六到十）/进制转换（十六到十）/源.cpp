
#include<iostream>
#include<cmath>
using namespace std;
int parseHex(char* hexString, int n)
{
	int t = 0;
	int* b = new int[n];
	for (int i = 0; i < n; ++i)
	{
		b[i] = (int)hexString[i];
		if (b[i] >= 48 && b[i] <= 57)
		
			b[i] -= 48;
		else if (b[i] >= 97 && b[i] <= 102)
			b[i] -= 87;
		
		else { b[i] -= 55; }
	}
	for (int i = 0; i < n; ++i)
	{
		t += b[i] * pow(16, n - i - 1);
	}
	return t;
}
int main()
{

	int n;
	cout << "输入的16进制数字长度:";
	cin >> n;
	cout << "请输入16进制数字：" << endl;
	char* a = new char[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	cout << parseHex(a, n);
	delete[]a;
}

    
