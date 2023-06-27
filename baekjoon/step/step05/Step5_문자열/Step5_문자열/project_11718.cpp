//11. 그대로 출력하기

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string tmp;

	while (true)
	{
		getline(cin, tmp);

		if (tmp.length() <= 0)
			break;

		cout << tmp;
	}

	return 0;
}