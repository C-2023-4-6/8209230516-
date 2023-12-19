#include<iostream>
using namespace std;
bool is_prime(int num)
{
	for (int i = 2; i < num-1; i++)
	{
		if (num % i == 0)
		{
			return false;
		}

	}return true;
}
int main()
{
	int num; int i=0;
	cin >> num;
	
	while (i < 200)
	{
		if (is_prime(num))
		{
			cout << num << " ";
			i++;
			if (i % 10 == 0)
				cout << "" << endl;
		}
		num++;

		
	}

}