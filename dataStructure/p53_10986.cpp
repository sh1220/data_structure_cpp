  // p.53 ������ �� ���ϱ�

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
	// ������
	for (size_t i = 1; i <= N; i++)
	{
		cin >> temp;
		A[i] = A[i - 1] + temp;
	}

	// ������ ������ ����
	for (size_t i = 1; i <= N; i++)
	{
		A[i] = A[i] % M;
	}


	// �� �������� ���� �� vector�� ����
	for (size_t i = 1; i <= N; i++)
	{
		B[A[i]]++;
	}

	count += B[0];

	// ���� �������� ���� �͵��� nC2
	long long count = 0;
	for (size_t i = 0; i < M; i++)
	{
		if(B[i] > 1) count += (B[i] * (B[i] - 1)) / 2;
	}

	cout << count;






}
*/

// �ڷ��� ���� �� �����ϱ�!!!