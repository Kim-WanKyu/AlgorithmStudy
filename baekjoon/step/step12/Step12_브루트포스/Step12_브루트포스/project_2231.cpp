//2. ºÐÇØÇÕ

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;

	cin >> n;

	for (int i = n - (to_string(n).length() * 9); i < n; i++)
	{
		string strI = to_string(i);
		int len = strI.length();

		int tmp = i;

		for (int j = 0; j < len; j++)
		{
			tmp += static_cast<int>(strI[j] - '0');
		}

		if (tmp == n)
		{
			cout << i;
			break;
		}
		else if (i == n - 1)
		{
			cout << 0;
		}
	}

	return 0;
}