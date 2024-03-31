// p.58 투 포인터 (연속된 자연수의 합 구하기)

/*
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	int first = 1, end = 1;
	int temp, count = 0;

	cin >> N;
	while (first <= N)
	{
		temp = (first + end) * (end - first +1) / 2;
		if (temp == N)
		{
			count++;
			first++;
			continue;
		}
		if (temp < N)
		{
			end++;
			continue;
		}
		if (temp > N)
		{
			first++;
			continue;
		}

	}
	cout << count;


}
*/