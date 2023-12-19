#include<iostream>
using namespace std;
class Point
{
private:
	int x=60;
	int y=80;
public:
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	int display()
	{
		cout << "修改后的坐标为：" << "(" << x << "," << y << ")" << endl;
		return 0;
	}
};
int main()
{
	Point p1;
	p1.setPoint(20, 10);
	p1.display();
}