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

	list<int> resultList;
	list<int>::iterator iter;

	string s;

	cin >> s;

	for (int j = 0; j < s.length(); j++)
	{
		if (s[j] == i)
		{
			resultList.push_back(s.find(i));
		}
	}

	for (iter = resultList.begin(); iter != resultList.end(); iter++)
	{
		cout << *iter << sp;
	}
	return 0;
}

//baekjoon
//void Check(string s)
//{
//	for (int i = 0; s.length(); i++)
//	{
//		for (int j = 97; j <= 122; j++)
//		{
//			if (s[i] == j)
//			{
//				cin 
//			}
//			else
//			{
//
//			}
//		}
//	}
//}
