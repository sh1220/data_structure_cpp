// p.77 슬라이딩 윈도우 (최솟값 찾기1)


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
	슬라이딩 윈도우 + 덱
	진짜 너무 어렵다;;
	물론 내가 덱을 몰라서 인게 클수도 있지만,
	시간 복잡도 계산할때, 슬라이딩 윈도우는 곱이 아니라 더하기로 계산된다는 점에 유의해야겠다.
	물론 구간합, 투포인터 슬라이딩 윈도우 모두 n^2이 나올때, 해결 방법으로 사용가능 할듯

	어떻게 적절히 사용해서 적용시킬수 있냐는 다른 내용이겠지만....

	특히 이번꺼는 덱 안에서의 정렬 부분이 어려웠던 것 같다.3
	덱 안에서 필요없는거는 pop하는 방식으로 같은 요소를 반복해서 찾지 않게 할수 있다는 점에 유의해야겠다.
*/