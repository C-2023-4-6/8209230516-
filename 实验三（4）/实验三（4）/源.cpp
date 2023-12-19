#include"标头.h"//在这里不用include"mytriangle.cpp"，否则会显示重复定义；
#include<iostream>
using namespace std;
int main()
{
	double side1, side2, side3; double square;
	cout << "请输入三角形的三条边长：" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3))
	{
		square = _area(side1, side2, side3);
		cout << "三角形的面积为：" << square << endl;
	}
	else
		cout << "该三边构不成三角形" << endl;
}
