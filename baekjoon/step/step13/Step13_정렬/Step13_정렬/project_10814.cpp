//10. 나이순 정렬

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool sortbyAge(const pair<int, pair<int, string>>& a, const pair<int, pair<int, string>>& b)
{
	if (a.second.first == b.second.first)
	{
		return a.first < b.first;
	}
	else {
		return a.second.first < b.second.first;
	}
}

int main()
{
	int n;

	cin >> n;

	vector<pair<int, pair<int, string>>> arr; // <index, {age,name}>

	for (int i = 0; i < n; i++)
	{
		int age;
		string name;
		cin >> age >> name;

		arr.push_back({ i, { age,name } });
	}

	sort(arr.begin(), arr.end(), sortbyAge);

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i].second.first << ' ' << arr[i].second.second << '\n';
	}

	return 0;
}