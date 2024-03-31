// p.70 슬라이딩 윈도우 (DNA 비밀번호)

/*
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int S, P;
	cin >> S >> P;

	string dna;
	cin >> dna;
	int A = 0, C = 0, G = 0, T = 0;
	cin >> A >> C >> G >> T;

	int count = 0;

	vector<int> b(4, 0);

	for (size_t i = 0; i < P; i++)
	{
		if (dna[i] == 'A') b[0]++;
		if (dna[i] == 'C') b[1]++;
		if (dna[i] == 'G') b[2]++;
		if (dna[i] == 'T') b[3]++;
	}
	for (size_t i = 0; i < S-P+1; i++)
	{
		if (b[0] >= A && b[1] >= C && b[2] >= G && b[3] >= T) count++;

		if (dna[i] == 'A') b[0]--;
		if (dna[i] == 'C') b[1]--;
		if (dna[i] == 'G') b[2]--;
		if (dna[i] == 'T') b[3]--;

		if (dna[i+P] == 'A') b[0]++;
		if (dna[i+P] == 'C') b[1]++;
		if (dna[i+P] == 'G') b[2]++;
		if (dna[i+P] == 'T') b[3]++;
	}

	cout << count;



}
*/
