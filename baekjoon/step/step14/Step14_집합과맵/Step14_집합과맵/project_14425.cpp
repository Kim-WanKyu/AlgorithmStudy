//2. 문자열 집합

#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;

	cin >> n >> m;

	set<string> setStrs;

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		setStrs.insert(str); //삽입
	}

	for (int i = 0; i < m; i++)
	{
		string findingStr;
		cin >> findingStr;
		count = setStrs.count(findingStr) == 1 ? count+1 : count;
	}

	cout << count;

	return 0;
}