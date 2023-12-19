# include <iostream>

using namespace std;
int main()
{
	float a, b, c;
	cout << "请输入a的值";
	cin >> a;
	c = a;
	b = (1.0 / 2) * (c + a / c);
	 while (fabs(b - c) > 1e-5)
	{
		c = b;
		b = (1.0 / 2) * (c + a / c);
	}
	
	cout << "a开根号后为："<<b << endl;
}