#include<iostream>
using namespace std;
void ð������(int* a, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int a[10] = {  };
	cout << "������ʮ����������:" << endl;
	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
	}
	int len = sizeof(a) / sizeof(a[0]);
	ð������(a, len);
	cout << "����������Ϊ��" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << a[i]<<" ";
	}
}