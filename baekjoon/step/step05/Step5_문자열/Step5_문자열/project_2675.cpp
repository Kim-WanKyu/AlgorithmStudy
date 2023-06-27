//7. 문자열 반복

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int iter;
		string s;
		cin >> iter >> s;

		for (int j = 0; j < s.length(); j++)
		{
			for (int k = 0; k < iter; k++)
			{
				cout << s.at(j);
			}
		}
		cout << '\n';
	}

	return 0;
}