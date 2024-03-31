
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
* ���������� �̰� Ƽ�� �߸� ������;;
* �̰� ���� ���4 ������
* �峭?
* ��� 1~2������ �ɵ�
* ���� �ε����� ����� ������ ���� ���߸��� �ʹ�ũ��...
* ������ �����ϸ�,
* ���ÿ��� ���� �ƴ� �ε����� ����
* i : 1~N-1�϶�, 
* A[top] > A[i]�̸�,  i���� push�ؼ� �� i���� ���ο� top�̵�. 
* top < i �ϼ� �ۿ� ����.(�ε����� ������� stack�� ���̹Ƿ�)
* 
* ��, ���ο� ���� ���� ���ÿ� �ִ� ������ ������ ���ÿ� ����.
* 
* �ݴ�� A[i]�� top���� ũ��, A[top]�� ��ū���� A[i]��
* A[top]~A[i] ������ ������ ��� A[top]���� ���� ���̱� ������
* �׸��� pop�Ѵ��� ���� A[top]�� A[i]���� ���غ���
* 
* ��, ���ο� ���� ���� ���ÿ� �ִ� ������ ũ��, �� ���� ��ū���� ��.
* (���ο� ������ �� ū���� ���ö�����, Ȯ�� & pop)
* 
* 
* ************************************************************************************
* stack�� ���� �ʹ� ���� �����θ� �������� �ߴ� ���� �� ������ ��Ǯ�ȴ� �ֿ� ����!!
* �׻� �ε����� ����ϴ� �͵� ����Ұ�!!
* 
* � �迭�� ���� �ٸ� �ڷᱸ���� �ִ°͵� ���������,
* �� ���� �ε����� �ٸ� �ڷᱸ���� �ִ°͵� �ϳ��� �����!!
* ************************************************************************************
* 
* 
*/






// ù��° Ǯ��, ������������ n^2�� �Ǿ����...
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