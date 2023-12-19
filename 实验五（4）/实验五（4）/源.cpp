#include<iostream>
using namespace std;
class Student
{
public:
	int num;
	int score;
};
int _max(Student* a )
{
	int k;
		for (int i = 0; i < 4; i++)
		{
			if (a[i].score > a[i + 1].score)
				k = i;
			else
				k = i + 1;
			while (i == 3)
			{
				cout << a[k].num << endl;
				break;
			} 
			
		}
		return k;
}
int main()
{
	Student arr[5] = { {3,85},{4,83},{5,91},{6,87},{7,95} };
	cout << "分数最高的学生的学号为:" << endl;
	_max(arr);
}