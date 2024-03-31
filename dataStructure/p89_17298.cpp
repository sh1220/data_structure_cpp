
/*
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N;
	cin >> N;

	vector<int> v(N, 0);
	vector<int> v2(N, 0);
	stack<int> s;

	for (size_t i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	s.push(0);
	for (size_t i = 1; i < N; i++)
	{
		while (!s.empty() && v[i] > v[s.top()])
		{
			v2[s.top()] = v[i];
			s.pop();
			
		}
		s.push(i);
	}
	while (!s.empty())
	{
		v2[s.top()] = -1;
		s.pop();
	}

	for (size_t i = 0; i < N; i++)
	{
		cout << v2[i] << " ";
	}

}
*/

/*
* 개인적으로 이거 티어 잘못 적은듯;;
* 이게 어케 골드4 문제냐
* 장난?
* 골드 1~2문제는 될듯
* 물론 인덱스를 사용할 생각을 안한 내잘못이 너무크다...
* 간단히 설명하면,
* 스택에는 값이 아닌 인덱스를 담음
* i : 1~N-1일때, 
* A[top] > A[i]이면,  i값을 push해서 이 i값이 새로운 top이됨. 
* top < i 일수 밖에 없음.(인덱스가 순서대로 stack에 쌓이므로)
* 
* 즉, 새로운 값이 기존 스택에 있는 값보다 작으면 스택에 쌓임.
* 
* 반대로 A[i]가 top보다 크면, A[top]의 오큰수는 A[i]값
* A[top]~A[i] 사이의 값들은 모두 A[top]보다 작을 것이기 때문에
* 그리고 pop한다음 다음 A[top]과 A[i]값을 비교해보기
* 
* 즉, 새로운 값이 기존 스택에 있는 값보다 크면, 그 값이 오큰수가 됨.
* (새로운 값보다 더 큰수가 나올때까지, 확인 & pop)
* 
* 
* ************************************************************************************
* stack에 값을 너무 실제 값으로만 넣으려고 했던 것이 이 문제가 안풀렸던 주요 원인!!
* 항상 인덱스를 사용하는 것도 고려할것!!
* 
* 어떤 배열의 값을 다른 자료구조에 넣는것도 방법이지만,
* 그 값의 인덱스를 다른 자료구조에 넣는것도 하나의 방법임!!
* ************************************************************************************
* 
* 
*/






// 첫번째 풀이, 내림차순에서 n^2이 되어버림...
/*
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N;
	cin >> N;

	vector<int> v(N, 0);

	for (size_t i = 0; i < N; i++)
	{
		cin >> v[i];
	}
	int temp = v[1], temp_index = 1;

	for (size_t i = 0; i < N; i++)
	{
		while (v[i] >= temp)
		{
			temp_index++;
			if (temp_index < N) 
			{
				temp = v[temp_index];
			}
			else
			{
				temp = -1;
				temp_index = i+2;
				break;
			}
		}
		cout << temp << " ";
		

	}




}
*/