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

	vector<string> stringArray = { "", };
	vector<string>::iterator iter;
	string s;
	int count;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> s;
		stringArray.push_back(s);
	}

	for (int i = 0; i < stringArray.size(); i++)
	{
		for (int j = 0; j < stringArray[i].size(); j++)
		{
			stringArray[i].
		}
	}

	//for (iter = stringArray.begin(); iter < stringArray.end(); iter++)
	//{
	//	cout << *iter << endl;
	//}
	//for (int i = 0; i < stringArray.size(); i++)
	//{
	//	cout << stringArray[i] << endl;
	//}

	return 0;
}