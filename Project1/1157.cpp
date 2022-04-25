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

	string word;
	int array[26];
	fill_n(array, 26, 0);

	cin >> word;

	for (char c = 65; c < 91; c++)
	{
		for (int i = 0; i < word.length(); i++)
		{
			if (word[i] == c || word[i] == c + 32)
			{
				array[c - 65] += 1;
			}
		}
	}


	return 0;
}