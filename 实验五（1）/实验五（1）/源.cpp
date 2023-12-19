#include<iostream>
using namespace std;
class Time             
{
public:
	void setTime()
	{
		int a; int b; int c;
		cin >> a >> b >> c;
		hour = a;
		minute = b;
		sec = c;
	}
	void getTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
private:              
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;
	t1.setTime();
	cout << "您输入的时间为：";
	t1.getTime();
	
	return 0;
}