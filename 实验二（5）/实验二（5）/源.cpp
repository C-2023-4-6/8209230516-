#include <string>
#include<iostream>
using namespace std;
int main()
{
	string text;
	int a = 0, b = 0, c = 0, d = 0;
	cout << "������һ���ַ�" << endl;
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
	cout << "Ӣ����ĸ����Ϊ��" << a << endl;
	cout << "���ֵĸ���Ϊ��" << c << endl;
	cout << "�ո�ĸ���Ϊ��" << b << endl;
	cout << "�����ַ��ĸ���Ϊ��" << d << endl;
	return 0;;

	
}