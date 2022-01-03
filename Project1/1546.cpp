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

	int index = 0;
	int max = 0;
	double result = 0;
	cin >> index;
	double* score = new double[index];
	double avg = 0;

	for (int i = 0; i < index; i++)
		cin >> score[i];

	max = score[0];
	for (int i = 1; i < index; i++)
	{
		if (max < score[i])
		{
			max = score[i];
	
		}
	}

	for (int i = 0; i < index; i++)
	{
		avg = (score[i] / max) * 100;
		result += avg;
	}
	cout.setf(ios::fixed);
	cout.precision(12);
	cout << result / index;
	
	return 0;
}