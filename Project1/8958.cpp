#include <iostream>
#include <vector>
#include <list>
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

	list<string> wordList;
	list<string>::iterator iter;

	string word;
	int score = 0;
	int resultScore = 0;
	int count = 0;

	for (int i = 0; i < count; i++)
	{
		getline(cin, word);
		wordList.push_back(word);
	}

	for (int i = 0; i < wordList.max_size(); i++)
	{
		for (int j = 0; j < advance(wordList.begin(), 1) j++)
		{

		}
	}

	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] == 'O')
		{
			score += 1;
			resultScore += score;
		}
		else if (word[i] == 'X')
		{
			score = 0;
		}
	}
	cout << resultScore;

	return 0;
}