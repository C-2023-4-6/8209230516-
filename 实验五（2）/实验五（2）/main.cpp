#include <iostream>   //将类声明头文件包含进来
using namespace std;
#include "student.h"
int main()
{
	Student stud;                //定义对象
	cout << "请输入学生的学号，姓名和性别：";
	stud.set_value();
	stud.display();              //执行stud对象的display函数
	return 0;
}