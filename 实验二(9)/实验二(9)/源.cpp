# include <iostream>

using namespace std;
int main()
{
	float b = 2, c=0 ,sum = 0 ;
	while (b < 100)
	{
		sum = sum + b;
		b = 2 * b;
		++c;
	}
	cout << "ÿ��ƽ����" << 0.8 * sum / c << "Ԫ" << endl;
	

}