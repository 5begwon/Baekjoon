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

	int numbers[8] = { 0, };
	int checker[8] = { 0, };

	fill_n(checker, 8, 2);

	for (int i = 0; i < 8; i++)
	{
		cin >> numbers[i];
	}
	
	for (int i = 0; i < 8; i++)
	{
		if (numbers[i] == i + 1)
		{
			checker[i] = 0;
		}
	}

	return 0;
}