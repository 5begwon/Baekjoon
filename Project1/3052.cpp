#include <iostream>
using namespace std;

int main()
{
	int array1[10] = { 0, };
	int array2[10] = { 0, };

	for (int i = 0; i < 10; i++)
	{
		cin >> array1[i];
		array2[i] = array1[i] % 42;
	}

	int result = 0;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (array2[i] == array2[j])
			{
				
			}
			else
			{
				result += 1;
				break;
			}
		}
	}

	cout << result;

	return 0;
}