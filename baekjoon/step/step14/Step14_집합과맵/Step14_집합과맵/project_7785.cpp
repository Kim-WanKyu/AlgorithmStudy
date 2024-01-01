//3. ȸ�翡 �ִ� ���

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

	set<string, greater<>> inOutLog;	//���ı����� �������� �����ν� ���� ���� �������� ��µǵ��� ��.

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