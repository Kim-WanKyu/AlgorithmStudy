//6. 크로아티아 알파벳

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int count = 0;

	cin >> str;

	for (int i = str.length() - 1; i >= 0; i--)
	{
		if (i > 0 && str.at(i) == 'j')
		{
			if (str.at(i - 1) == 'l' || str.at(i - 1) == 'n')
			{
				i--;
			}
		}
		else if (i > 0 && str.at(i) == '-')
		{
			if (str.at(i - 1) == 'c' || str.at(i - 1) == 'd')
			{
				i--;
			}
		}
		else if (i > 0 && str.at(i) == '=')
		{
			if (i > 1 && str.at(i - 1) == 'z' && str.at(i - 2) == 'd')
			{
				i -= 2;
			}
			else if (str.at(i - 1) == 'c' || str.at(i - 1) == 's' || str.at(i - 1) == 'z')
			{
				i--;
			}
		}
		count++;
	}

	cout << count;

	return 0;
}