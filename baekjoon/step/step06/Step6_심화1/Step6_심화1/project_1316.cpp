//7. 그룹 단어 체커

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;

	cin >> n;

	string* str = new string[n];

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> str[i];

		char* tmp = new char[str[i].length()];
		*tmp = 0;
		int tmpIndex = 0;

		for (int j = 0; j < str[i].length(); j++)
		{
			if (j == str[i].length() - 1 && tmp[tmpIndex - 1] == str[i].at(j))
			{
				count++;
				break;
			}
			else if (tmp[tmpIndex - 1] == str[i].at(j))
			{
				continue;
			}
			else
			{
				bool isChecked = true;

				for (int k = 0; k < tmpIndex; k++)
				{
					if (tmp[k] == str[i].at(j))
					{
						isChecked = false;
						break;
					}
				}

				if (!isChecked)
				{
					break;
				}
				else
				{
					if (j == str[i].length() - 1)
					{
						count++;
						break;
					}
					else
					{
						tmp[tmpIndex] = str[i].at(j);
						tmpIndex++;
					}
				}
			}
		}
		delete[] tmp;
	}

	cout << count;

	delete[] str;

	return 0;
}