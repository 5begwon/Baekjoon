#include <iostream>
using namespace std;

int main()
{
	int num1 = 10;
	int& num2 = num1;
	int& num3 = num2;
	cout << num3;

	return 0;
}
