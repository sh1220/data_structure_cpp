// p.65 �� ������ (���� �� ���ϱ�)


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



// start�� end�� i�� ���(�� �ڱ� �ڽ� + �ٸ� ��  == �ڱ� �ڽ�)�� �ȵ�.
// ��, �ٸ� �μ��� ���� �ڱ� �ڽ��� ��쿡 ���ؼ��� ����