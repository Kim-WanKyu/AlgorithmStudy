//7. 좌표 정렬하기

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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


	sort(arr.begin(), arr.end());

	for (int i = 0; i < n; i++)
	{
		cout << arr[i].first << ' ' << arr[i].second << '\n';
	}

	return 0;
}