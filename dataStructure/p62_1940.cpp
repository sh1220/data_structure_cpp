// p.62 투 포인터 (주몽의 명령)

/*
#include <vector>
#include <iostream>
#include <algorithm> 
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int N, M;
	cin >> N >> M;
	vector<int> a(N, 0);


	for (size_t i = 0; i < N; i++)
	{
		cin >> a[i];
	}


	sort(a.begin(), a.end());


	int sum, count = 0;
	int start = 0, end = N - 1;
	while (start < end)
	{
		sum = a[start] + a[end];
		if (sum == M)
		{
			a.erase(a.begin() + end);
			a.erase(a.begin() + start);
			count++;
			start--;
			end -= 2;
			continue;
		}
		if (sum < M)
		{
			start++;
			continue;
		}
		if (sum > M)
		{
			end--;
			continue;
		}
	}
	cout << count;




}
*/
