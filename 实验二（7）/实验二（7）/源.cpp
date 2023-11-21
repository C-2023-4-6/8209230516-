# include <iostream>
using namespace std;
int main()
{

	int i = 0; int j = 0;
	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < j+1; i++)
		{
			cout << "*" ;
		}
		cout << endl;
	}
	return 0;
}