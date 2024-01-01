//6. µèº¸Àâ

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

	set<string> unheard;
	set<string> unknown;

	for (int i = 0; i < n; i++)
	{
		string name;
		cin >> name;
		unheard.insert(name);
	}


	for (int i = 0; i < m; i++)
	{
		string unseenName;
		cin >> unseenName;
		if (unheard.find(unseenName) != unheard.end())
		{
			unknown.insert(unseenName);
		}
	}

	cout << unknown.size() << '\n';
	for (set<string>::iterator iter = unknown.begin(); iter != unknown.end(); iter++)
	{
		cout << *iter << '\n';
	}

	return 0;
}