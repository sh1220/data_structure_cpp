// p.48 구간합 문제 2

#include <vector>
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	vector<vector<int>> A;
	vector<int> A_temp;
	int N, M;
	cin >> N >> M;

	int temp;
	for (size_t i = 0; i < N; i++)
	{
		cin >> temp;
		A_temp.push_back(temp);
		for (size_t j = 0; j < N-1; j++)
		{
			cin >> temp;
			A_temp.push_back(A_temp[j] + temp);
		}
		A.push_back(A_temp);
		A_temp.clear();
		
	}


	int x1, y1, x2, y2;
	for (size_t i = 0; i < M; i++)
	{
		int sum = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		for (size_t j = x1; j <= x2; j++)
		{
			if (y1 - 2 >= 0) 
			{
				sum += A[j - 1][y2 - 1] - A[j - 1][y1 - 2];
			}
			else 
			{
				sum += A[j - 1][y2 - 1];
			}
		}
		cout << sum << '\n';

	}


}