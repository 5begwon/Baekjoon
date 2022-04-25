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
	fill_n(array, 26, -1);
	cin >> word;

	for (char c = 97; c < 123; c++)
	{
		for (int i = 0; i < word.length(); i++)
		{
			if (word.at(i) == c)
			{
				if (array[c - 97] == -1)
					array[c - 97] = i;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << array[i] << sp;
	}

	return 0;
}