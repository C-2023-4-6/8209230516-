/*#include<iostream>
using namespace std;
int main()
{
	bool a[10000]; int i = 0; int j = 0;
	while (i < 100)
	{
		i++; a[i] = false;
	}
	for (int n = 1; n < 100; n++)
	{
		int k = 1;
		int t= (n + (n + 1) * k);
		for (;t< 100; k++)
		{
			t = (n + (n + 1) * k);
			a[n+(n+1)*k] = !a[n +(n+1)* k];
			
		}
	}
	for (int i = 1; i < 100; i++)
	if(a[i])cout << i << endl;
	
}*/
#include<iostream>
using namespace std;
int main()
{
	bool a[10000]; int i = 0; int j = 0;
	while (i < 100)
	{
		i++; a[i] = false;
	}
	for (int n = 1; n < 100; n++)
	{
		int k = 1;
		int t = (n + (n + 1) * k);
		for (; t < 100; k++)
		{
			t = (n + (n + 1) * k);
			a[t] = !a[t];
		}
		
	}
	
	for (int j = 0; j < 100; j++)
	{
		if (a[j])cout << j+1<< "  ";
	}

}