#include<iostream>
using namespace std;
int peach(int day)
{
	if (day == 1)
		return 1;
	else
		return (peach(day - 1) + 1) * 2;
}
int main()
{
	int day=10 ;
	int total=peach(day);
	cout << "��һ�����һ��ժ��"<<total <<"������"<< endl;
	return 0;
}