// p.65 투 포인터 (좋은 수 구하기)


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
	int N;
	cin >> N;
	vector<long long> a(N, 0);


	for (size_t i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	sort(a.begin(), a.end());


	long long sum;
	int count = 0;
	int start = 0, end = N - 1;

	for (size_t i = 0; i < N; i++)
	{
		start = 0;
		end = N - 1;
		while (start < end)
		{
			sum = a[start] + a[end];
			if (sum == a[i])
			{
				if (i == start)
				{
					start++;
					continue;
				}
				if (i == end)
				{
					end--;
					continue;
				}
				
				count++;
				break;
			}
			if (sum < a[i])
			{
				start++;
				continue;
			}
			if (sum > a[i])
			{
				end--;
				continue;
			}
		}
	}
	
	cout << count;


}
*/



// start와 end가 i일 경우(즉 자기 자신 + 다른 수  == 자기 자신)면 안됨.
// 즉, 다른 두수의 합이 자기 자신일 경우에 대해서만 생각