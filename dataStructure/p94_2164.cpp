
// 너무 쉬워서 해설할 것도 없을듯.
/*
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N;
	cin >> N;

	queue<int> q;

	for (size_t i = 1; i <= N; i++)
	{
		q.push(i);
	}

	int temp;
	for (size_t i = 0; i < N-1; i++)
	{
		q.pop();
		temp = q.front();
		q.pop();
		q.push(temp);
	}

	cout << q.front();

}
*/