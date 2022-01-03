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

	int max, sequence;
	int number[9] = {};

	for (int i = 0; i < 9; i++)
	{
		cin >> number[i];
	}
	
	max = number[0];
	sequence = 0;
	for (int i = 1; i < 9; i++)
	{
		if (max < number[i])
		{
			max = number[i];
			sequence = i;
		}
	}
	sequence += 1;
	cout << max << nl << sequence;

	return 0;
}