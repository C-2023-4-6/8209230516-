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
	cout << "第一天猴子一共摘了"<<total <<"个桃子"<< endl;
	return 0;
}