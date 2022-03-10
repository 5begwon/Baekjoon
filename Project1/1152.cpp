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
	int count = 1;

	getline(cin, word);

	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] == sp)
		{
			if (i == 0 || i == word.length())
			{
				continue;
			}
			else
			{
				count++;
			}
		}
	}

	cout << count;
	return 0;
}