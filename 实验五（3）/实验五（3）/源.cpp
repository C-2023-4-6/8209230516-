#include<iostream>
using namespace std;
class Cuboid
{
public:
	int length;
	int width;
	int height;
	int count()
	{
		int v = length * width * height;
		cout << "该长方体的体积为：" << v << endl;
		return v;
	}
};
int main()
{
	Cuboid C1;
	cout << "请输入第一个长方体的长宽高：" << endl;
	cin >> C1.length >> C1.width >> C1.height;
	C1.count();
	Cuboid C2;
	cout << "请输入第二个长方体的长宽高：" << endl;
	cin >> C2.length >> C2.width >> C2.height;
	C2.count();
	Cuboid C3;
	cout << "请输入第三个长方体的长宽高：" << endl;
	cin >> C3.length >> C3.width >> C3.height;
	C3.count();
}