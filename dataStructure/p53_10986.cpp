  // p.53 나머지 합 구하기

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

	vector<long long> A(N+1, 0);
	vector<long long> B(M, 0);
	
	int temp = 0;
	// 구간합
	for (size_t i = 1; i <= N; i++)
	{
		cin >> temp;
		A[i] = A[i - 1] + temp;
	}

	// 구간합 나머지 연산
	for (size_t i = 1; i <= N; i++)
	{
		A[i] = A[i] % M;
	}


	// 각 나머지에 따른 값 vector로 저장
	for (size_t i = 1; i <= N; i++)
	{
		B[A[i]]++;
	}

	count += B[0];

	// 같은 나머지를 가진 것들의 nC2
	long long count = 0;
	for (size_t i = 0; i < M; i++)
	{
		if(B[i] > 1) count += (B[i] * (B[i] - 1)) / 2;
	}

	cout << count;






}
*/

// 자료형 범위 꼭 생각하기!!!