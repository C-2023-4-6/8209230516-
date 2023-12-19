#include<iostream>
 using namespace std;
int main()
{
	int arr[10];
	int i = 0;
	cout << "请输入任意十个数字" << endl;
	for (int i = 0; i < 10; i++)
		cin >> arr[i];
	cout << arr[0]<<" ";
	for (int i = 1; i <= 9; i++)
	{
		for (int n = 0; n < i; n++)
			if (arr[i] != arr[n])
			{
				if(n==i-1)
					cout << arr[i] << " ";
				
			}
			else
				break;
	}

}