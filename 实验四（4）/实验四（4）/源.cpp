//Ϊʲôlist3[0]��һ����ֵ�����
#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	
	for (int i = 0; i <= size1 ; i++)
	{
		list3[i] =  list1[i];
	}
	for (int j = 0; j <= size2; j++)
	{
		list3[size1 + j  ] = list2[j];
	}
	for (int i = 0; i < size1+size2 - 1; i++)
	{
		for (int j = 0; j < size1+size2 - i - 1; j++)
		{
			if (list3[j] > list3[j + 1])
			{
				int temp = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int size1; 
    int list1[100] ;
	cout << "�밴��С�����һ������:" << endl;
	cin >> size1;
	for (int j = 0; j <= size1-1; j++)
		cin >> list1[j];
	int size2;
	int list2[100];
	cout << "�밴��С����ڶ�������:" << endl;
	cin >> size2;
	for (int k = 0; k <= size2-1; k++)
		cin >> list2[k];
	int list3[200];
	merge(list1, size1, list2, size2, list3);
	for (int k = 0; k <= size1 + size2-1; k++)
		cout << list3[k]<<" ";
	return 0;
}