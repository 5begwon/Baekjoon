#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int number = 6;	// ����� ����
int INF = 10000000;

vector<pair<int, int>>a[7];	// ��������Ʈ
int d[7];	// �ּ� ���

void dijkstra(int start)
{
	d[start] = 0;
	priority_queue<pair<int, int>>pq;	// �켱 ���� ť
	pq.push(make_pair(start, 0));
	while (!pq.empty())
	{
		int current = pq.top().first;
		int distance = -pq.top().second;
		pq.pop();
		if (d[current] < distance) continue;	// ���� ������� �Ÿ��� ���� ������ �Ÿ� ���� ������ ���ư�
		for (int i = 0; i < a[current].size(); i++)	// a��������Ʈ�� current��° �迭�� ũ�⸸ŭ �ݺ���
		{
			int next = a[current][i].first;	// next�� a��������Ʈ�� current��° �迭�� i��° first����
			int nextDistance = distance + a[current][i].second;	// nextDistance�� �ڱ� �ڽ� ����� �Ÿ� + a��������Ʈ�� current��° �迭�� i��° second��
			if (nextDistance < d[next])	// ���� nextDistance�� ���� �Ÿ��� �����ϴ� �迭��[next]��° ������ ������
			{
				d[next] = nextDistance;	// ���� ������Ʈ��
				pq.push(make_pair(next, -nextDistance));	// �켱���� ť�� ���� �־���
			}
		}
	}
}

int main(void)
{
	// ��� �Ÿ����� �ִ� ������ �ʱ�ȭ
	for (int i = 1; i <= number; i++)
	{
		d[i] = INF;
	}

	// �׷��� ���� �־���
	a[1].push_back(make_pair(2, 2));
	a[1].push_back(make_pair(3, 5));
	a[1].push_back(make_pair(4, 1));

	a[2].push_back(make_pair(1, 2));
	a[2].push_back(make_pair(3, 3));
	a[2].push_back(make_pair(4, 2));

	a[3].push_back(make_pair(1, 5));
	a[3].push_back(make_pair(2, 3));
	a[3].push_back(make_pair(4, 3));
	a[3].push_back(make_pair(5, 1));
	a[3].push_back(make_pair(6, 5));

	a[4].push_back(make_pair(1, 1));
	a[4].push_back(make_pair(2, 2));
	a[4].push_back(make_pair(3, 3));
	a[4].push_back(make_pair(5, 1));

	a[5].push_back(make_pair(3, 1));
	a[5].push_back(make_pair(4, 1));
	a[5].push_back(make_pair(6, 2));

	a[6].push_back(make_pair(3, 5));
	a[6].push_back(make_pair(5, 2));

	dijkstra(1);

	// �ּ� �ڽ�Ʈ Ž�� �� ���
	for (int i = 1; i <= number; i++)
	{
		printf("%d ", d[i]);
	}

	return 0;
}