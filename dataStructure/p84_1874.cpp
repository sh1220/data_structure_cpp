


/*
#include <vector>
#include <deque>
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	stack<int> s;
	queue<int> q;
	vector<char> result;
	int N, temp;
	cin >> N;


	// 책에서는 vector로 처리했지만, 순서대로 넣는다는 점때문에 queue써도 좋을것 같아서
	// 한번 연습겸 써봄.
	for (size_t i = 0; i < N; i++)
	{
		cin >> temp;
		q.push(temp);
	}

	
	int max = 0;
	bool possibility = true;


	// 가능한지 검사
	for (size_t i = 0; i < N; i++)
	{
		temp = q.front();
		q.pop();

		// 이것 대신에  temp >= max 로도 사용가능
		// 이거는 비어있거나(비어 있을때는 새로운 값이 무조건 이전 값보다 더 클수 밖에 없음. 수가 중복되지 않아서)
		// 제일 위에 있는 값보다 큰 경우, 즉 이전 값보다 큰값이 들어오 경우를 체크하는것
		// 하지만 max로 하는 것이 더 가독성 좋고, 이해하기도 쉬울듯.
		if (s.empty() || temp > s.top()) 
		{
			// 마찬가지로 이것도 while(temp >= max)로 가능. 근데 이거는 이미 for로 잘 적은 것 같음
			for (size_t j = max+1; j <= temp; j++)
			{
				s.push(j);
				result.push_back('+');
			}
			s.pop();
			result.push_back('-');
		}
		else if (temp == s.top())
		{
			s.pop();
			result.push_back('-');
		}
		else
		{
			possibility = true;
			cout << "NO";
			return 0;
		}
		if (max < temp) max = temp;
	}


	// 가능하다면 출력
	if (possibility == true)
	{
		for (size_t i = 0; i < 2*N; i++)
		{
			cout << result[i] << "\n";
		}
		

	}


}
*/
