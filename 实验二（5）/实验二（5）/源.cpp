#include <string>
#include<iostream>
using namespace std;
int main()
{
	string text;
	int a = 0, b = 0, c = 0, d = 0;
	cout << "请输入一行字符" << endl;
	getline(cin, text);
	int t=getchar();
	for (t=0;t<text.size();t++)
	{
		if (text[t] >= 97 && text[t] <= 122 || text[t] >= 65 && text[t] <= 90)
		{
			a++;
		}
		else if (text[t] == 32)
		{
			b++;
		}
		else if (text[t] >= 48 && text[t] <= 57)
		{
			c++;
		}
		else
		{
			d++;
		}
	}
	cout << "英文字母个数为：" << a << endl;
	cout << "数字的个数为：" << c << endl;
	cout << "空格的个数为：" << b << endl;
	cout << "其他字符的个数为：" << d << endl;
	return 0;;

	
}