//3. 회사에 있는 사람

#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;

	cin >> n;

	set<string, greater<>> inOutLog;	//정렬기준을 역순으로 함으로써 사전 순의 역순으로 출력되도록 함.

	for (int i = 0; i < n; i++)
	{
		string name, enterLeave;
		cin >> name >> enterLeave;
		if (enterLeave == "enter")
		{
			inOutLog.insert(name);
		}
		else if (enterLeave == "leave")
		{
			inOutLog.erase(name);
		}
	}

	for (auto& i : inOutLog)
	{
		cout << i << '\n';
	}

	return 0;
}