//5. 숫자 카드2

#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;

	map<int, int> card;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (card.find(num) != card.end())
		{
			card.find(num)->second++;
		}
		else
		{
			card.insert({ num, 1 });
		}
	}

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int findingNum;
		cin >> findingNum;
		if (card.find(findingNum) != card.end())
		{
			cout << card.find(findingNum)->second << ' ';
		}
		else
		{
			cout << 0 << ' ';
		}
	}

	return 0;
}