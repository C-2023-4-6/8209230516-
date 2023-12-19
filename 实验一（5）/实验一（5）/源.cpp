#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int f;//华氏温度
	int t;//摄氏温度
	cout << "请输入华氏温度" << endl;
	cin >> f  ;
	t = (f - 32) / 1.8;
	cout << "对应的摄氏温度为" << t <<fixed<<setprecision(2)<< "℃" << endl;
	return 0;
}