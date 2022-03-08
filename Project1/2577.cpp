#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num;
	int multiply = 1;
	int array[10] = { 0, };

	string s;

	for (int i = 0; i < 3; i++)
	{
		cin >> num;
		multiply *= num;
	}
	s = to_string(multiply);

	for (int i = 0; i < s.length() + 1; i++)
	{
		for (int j = 48; j <= 57; j++)
		{
			if (s[i] == j)
			{
				array[j - 48] += 1;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}
	return 0;
}