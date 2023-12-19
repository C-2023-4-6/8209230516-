#include <iostream>
using namespace std;

const int num1 = 26;  
const int num2 = 100;  

void countLetters(const char list[], int counts[])
{
	for (int i = 0; i < num1; i++)
		counts[i] = 0;
	for (int j = 0; j < num2; j++)
	{
		counts[list[j] - 'a']++;
		counts[list[j] - 'A']++;
	}
    for (int i = 0; i < num1; i++) {
		if (counts[i] != 0)
			cout << static_cast<char>(i + 'a') << " : " << counts[i] << "  times " << endl;
	}
}

int main()
{
	char list[1000];
	int counts[num1];
	cout << "Enter a string : ";
	cin.getline(list, 1000);
	countLetters(list, counts);
	

	return 0;
}
