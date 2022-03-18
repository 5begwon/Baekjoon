#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

#define async_with_stdio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
constexpr auto nl = '\n';
constexpr auto sp = ' ';

int main()
{
	async_with_stdio;

	int numbers[8];
	bool check[8];

	for (int i = 0; i < 8; i++)
	{
		cin >> numbers[i];
	}

	for (int i = 0; i < 8; i++)
	{
		if (numbers[i] == i + 1)
		{
			check[i] = true;
		}
		else if (numbers[i] == 8 - i)
		{
			check[i] = false;
		}
		else
		{

		}
	}

	

	return 0;
}

	//int money, people, result, rest;
	//cin >> money >> people;

	//result = money / people;
	//rest = money % 10;
	//cout << result << nl << rest;