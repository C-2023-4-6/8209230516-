#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "请输入数组长度：";
	cin >> n;
	int* a = new int[n];
	cout << "请输入数组：" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	int* a_p;
	a_p = a;
	
	cout << *a_p << endl;
		cout << *a_p + 1 << endl;
	
}