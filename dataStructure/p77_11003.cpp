// p.77 �����̵� ������ (�ּڰ� ã��1)


/*
#include <vector>
#include <deque>
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, L;
	cin >> N >> L;

	vector<int> A;
	deque<pair<int, int>> B;

	int temp;
	for (size_t i = 0; i < N; i++)
	{
		cin >> temp;
		A.push_back(temp);
	}


	B.push_back({ 0, A[0]});
	pair<int, int> temp2;


	cout << B.back().second << ' ';

	for (int i = 1; i < N; i++)
	{
		temp2 = { i, A[i] };
		if (i - L >= B.front().first)
		{
			B.pop_front();
		}

		while (!B.empty() && B.back().second >= temp2.second)
		{
			B.pop_back();
		}

		B.push_back(temp2);

		cout << B.front().second << ' ';


	}





}

*/


/*
	�����̵� ������ + ��
	��¥ �ʹ� ��ƴ�;;
	���� ���� ���� ���� �ΰ� Ŭ���� ������,
	�ð� ���⵵ ����Ҷ�, �����̵� ������� ���� �ƴ϶� ���ϱ�� ���ȴٴ� ���� �����ؾ߰ڴ�.
	���� ������, �������� �����̵� ������ ��� n^2�� ���ö�, �ذ� ������� ��밡�� �ҵ�

	��� ������ ����ؼ� �����ų�� �ֳĴ� �ٸ� �����̰�����....

	Ư�� �̹����� �� �ȿ����� ���� �κ��� ������� �� ����.3
	�� �ȿ��� �ʿ���°Ŵ� pop�ϴ� ������� ���� ��Ҹ� �ݺ��ؼ� ã�� �ʰ� �Ҽ� �ִٴ� ���� �����ؾ߰ڴ�.
*/