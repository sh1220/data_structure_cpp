
#include <iostream>
#include <queue>
#include <vector>
#include <cstdlib>
using namespace std;

struct cmp {
	bool operator()(int i, int j)
	{
		if (abs(i) == abs(j)) return i > j;
		else return abs(i) > abs(j);
	}
};


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N;
	cin >> N;

	priority_queue<int, vector<int>, cmp> pq;


	int temp;
	for (size_t i = 0; i < N; i++)
	{
		cin >> temp;
		if (temp == 0)
		{
			if (!pq.empty())
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
			else
			{
				cout << '0' << '\n';
			}
		}
		else
		{
			pq.push(temp);
		}
	}

}

/*
�켱���� ť ����
�켱���� ť�� �ȴٸ�, Ǯ�� �ִ� ����
�ٸ� ������ ���� �� ���� �˻��ؼ� ã�ƺ�.

����ü / class, ������ �������̵��� ���� �˾ƾ��ؼ�
�̺κ� �� ã�ƺ���.

*/