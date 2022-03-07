#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num;
	int multiply = 1;
	string s;
	int array[9] = { 0, };

	for (int i = 0; i < 3; i++)
	{
		cin >> num;
		multiply *= num;
	}
	for (int i = 1; i < 9; i++)
	{
		s = multiply;
	}
	cout << s;
	return 0;
}