//8. 서로 다른 부분 문자열의 개수

#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string str;

	cin >> str;

	set<string> setStr;

	for (int i = 0; i < str.length(); i++)
	{
		for (int j = 1; j <= str.length() - i; j++)
		{
			setStr.insert(str.substr(i, j));
		}
	}

	cout << setStr.size();

	return 0;
}