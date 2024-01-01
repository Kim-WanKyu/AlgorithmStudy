//8. 좌표 정렬하기 2

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool sortbyY(const pair<int, int>& a, const pair<int, int>& b);

int main()
{
	int n;

	cin >> n;

	vector<pair<int, int>> arr;

	for (int i = 0; i < n; i++)
	{
		int first, second;
		cin >> first >> second;

		arr.push_back({ first,second });
	}


	sort(arr.begin(), arr.end(), sortbyY);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i].first << ' ' << arr[i].second << '\n';
	}

	return 0;
}

bool sortbyY(const pair<int, int>& a, const pair<int, int>& b)
{
	if (b.second == a.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}