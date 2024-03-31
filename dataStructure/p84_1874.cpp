


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


	// å������ vector�� ó��������, ������� �ִ´ٴ� �������� queue�ᵵ ������ ���Ƽ�
	// �ѹ� ������ �ẽ.
	for (size_t i = 0; i < N; i++)
	{
		cin >> temp;
		q.push(temp);
	}

	
	int max = 0;
	bool possibility = true;


	// �������� �˻�
	for (size_t i = 0; i < N; i++)
	{
		temp = q.front();
		q.pop();

		// �̰� ��ſ�  temp >= max �ε� ��밡��
		// �̰Ŵ� ����ְų�(��� �������� ���ο� ���� ������ ���� ������ �� Ŭ�� �ۿ� ����. ���� �ߺ����� �ʾƼ�)
		// ���� ���� �ִ� ������ ū ���, �� ���� ������ ū���� ���� ��츦 üũ�ϴ°�
		// ������ max�� �ϴ� ���� �� ������ ����, �����ϱ⵵ �����.
		if (s.empty() || temp > s.top()) 
		{
			// ���������� �̰͵� while(temp >= max)�� ����. �ٵ� �̰Ŵ� �̹� for�� �� ���� �� ����
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


	// �����ϴٸ� ���
	if (possibility == true)
	{
		for (size_t i = 0; i < 2*N; i++)
		{
			cout << result[i] << "\n";
		}
		

	}


}
*/
