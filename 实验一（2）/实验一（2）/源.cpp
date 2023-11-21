#include<iostream>
#define π 3.1415926
using namespace std;
int main()
{
	int h;//圆锥的高
	int r;//圆锥的底面圆半径
	cout << "请输入圆锥的高" << endl;
	cin >> h;
	cout << "请输入底面圆的半径" << endl;
	cin >> r;
	float v = ( h * r * r * π)/3;//圆锥的体积
	
	cout << "圆锥的体积v=" << v << endl;
	return 0;
}