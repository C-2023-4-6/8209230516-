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
		cout << "�ó���������Ϊ��" << v << endl;
		return v;
	}
};
int main()
{
	Cuboid C1;
	cout << "�������һ��������ĳ���ߣ�" << endl;
	cin >> C1.length >> C1.width >> C1.height;
	C1.count();
	Cuboid C2;
	cout << "������ڶ���������ĳ���ߣ�" << endl;
	cin >> C2.length >> C2.width >> C2.height;
	C2.count();
	Cuboid C3;
	cout << "�����������������ĳ���ߣ�" << endl;
	cin >> C3.length >> C3.width >> C3.height;
	C3.count();
}