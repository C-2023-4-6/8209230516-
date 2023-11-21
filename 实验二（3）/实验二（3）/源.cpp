#include<iostream>
using namespace std;
int main()
{
	cout << "请输入三角形的边长：";
	
	int a, b, c, d;
	cin >> a >> b >> c;
	if ((a + b > c) && (a + c > b) &&( b + c > a))
	{
		d = a + b + c;
		if (a == b || a == c || b == c)
		{
			cout << "该三角形为等腰三角形";
		}
		cout << "三角形的周长为" << d << endl;
	}

	else {
		cout << "构不成三角形";
	}
	return 0;
}