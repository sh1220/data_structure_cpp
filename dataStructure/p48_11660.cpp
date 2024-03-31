// p.48 구간합 문제 2
/*
#include <vector>
#include <iostream>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, M;
	cin >> N >> M;

	vector<vector<int>> A(N + 1, vector<int>(N + 1, 0));
	vector<vector<int>> B(N + 1, vector<int>(N + 1, 0));

	for (size_t i = 1; i <= N; i++)
	{
		for (size_t j = 1; j <= N; j++)
		{
			cin >> A[i][j];
			B[i][j] = B[i - 1][j] + B[i][j - 1] - B[i - 1][j - 1] + A[i][j];
		}
	}

	for (size_t i = 1; i <= N; i++)
	{
		for (size_t j = 1; j <= N; j++)
		{
			cout << B[i][j] << ' ';
		}
		cout << '\n';
	}


	int x1, y1, x2, y2;
	for (size_t i = 0; i < M; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		int result = B[x2][y2] - B[x1 - 1][y2] - B[x2][y1 - 1] + B[x1 - 1][y1 - 1];
		cout << result << '\n';

	}


}
	*/
