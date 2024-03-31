// p.45 구간합 문제


/*
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	vector<int> A;
	vector<int> B;
	int N, M;
	cin >> N >> M;

	int temp;
	for (size_t i = 0; i < N; i++)
	{
		cin >> temp;
		A.push_back(temp);
	}

	B.push_back(A[0]);
	for (size_t i = 0; i < N; i++)
	{
		B.push_back(B[i] + A[i]);
	}

	int a, b;
	for (size_t i = 0; i < M; i++)
	{
		int sum = 0;
		cin >> a >> b;
		cout << B[b] - B[a-1] << '\n';
		
	}


}
*/