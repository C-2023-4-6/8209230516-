/*#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int j = 0; int i = 0; int a, b, c, d, index; 
	a = strlen(s1); b = strlen(s2);
	bool s3[100];
	for (int m = 0; m < a; m++)
	{
		s3[a] = false;
	}
	for (int n = 0; n < b-a+1; n++)
	{
		for (c = 0, d = n; (c < a) && (d < n + a); c++, d++)
		
			if (s1[c] == s2[d])
			{
				index = n;
				s3[c] = true;
			}
			int h = 0;
			for (int x = 0; x < a; x++)
			{

				if (n == b - a && s3[x] == false)
				{
					return -1; break;
				}
				if (s3[x])
				{
					h++;
				}
			}
			if (h == a)
			{
				return index;
			}
		
	}

}
int main()
{
	char s1[100]; char s2[100];
	cout << "请输入第一个字符串：";
	cin.getline(s1, 1000);
	cout << "请输入第二个字符串：";
	cin.getline(s2, 1000);
	cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << indexOf(s1, s2) << endl;
	return 0;
	
}//bool** s3;
//s3 = new bool* [a];*/

#include<iostream>
#include<cstring>
using namespace std;
int indexOf(char* s1, char* s2)
{
	int a, b, index, j, x;
	a = strlen(s1);
	b = strlen(s2);
	bool s3[100];
	for (int m = 0; m < a; m++)
		s3[m] = false;
	for (int i = 0; i < b - a + 1; i++)
	{
		for (j = 0, x = i; (j < a) && (x < i + a); j++, x++)
			if (s1[j] == s2[x])
			{
				index = i;
				s3[j] = true;
			}
		int h = 0;
		for (int n = 0; n < a; n++)
		{
			if (s3[n] == false && i == b - a)
			{
				return -1;
				break;
			}
			if (s3[n])
			{
				h++;
			}
		}
		if (h == a)
		{
			return index;
		}
	}
}
int main()
{
	int size = 100;
	char s1[100], s2[100];
	cout << "Enter the first string : ";
	cin.getline(s1, size);
	cout << "Enter the second string: ";
	cin.getline(s2, size);
	cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << indexOf(s1, s2) << endl;

	return 0;
}


