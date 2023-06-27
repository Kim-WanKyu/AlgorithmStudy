//6. ¾ËÆÄºª Ã£±â

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int alphaIndex[26];

	cin >> s;
	for (int i = 0; i < 26; i++)
	{
		alphaIndex[i] = -1;

		for (int j = 0; j < s.length(); j++)
		{
			if ('a' + i == s.at(j))
			{
				alphaIndex[i] = j;
				break;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << alphaIndex[i] << " ";
	}

	return 0;
}