//5. 단어 공부

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;

	int* alphabetCount = new int[26];

	char mostChar = '?';
	int mostCount = 0;

	for (int i = 0; i < 26; i++)
	{
		alphabetCount[i] = 0;
	}

	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		alphabetCount[(str.at(i) - 'a') >= 0 ? (str.at(i) - 'a') : (str.at(i) - 'A')] += 1;
	}

	for (int i = 0; i < 26; i++)
	{
		if (mostCount < alphabetCount[i])
		{
			mostCount = alphabetCount[i];
			mostChar = i + 'A';
		}
		else if (mostCount == alphabetCount[i])
		{
			mostChar = '?';
		}
	}

	cout << mostChar;

	delete[] alphabetCount;

	return 0;
}