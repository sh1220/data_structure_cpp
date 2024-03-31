
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
우선순위 큐 문제
우선순위 큐만 안다면, 풀수 있는 문제
다만 사용법을 내가 잘 몰라서 검색해서 찾아봄.

구조체 / class, 연산자 오버라이딩에 대해 알아야해서
이부분 잘 찾아볼것.

*/