//8. ³ª¸ÓÁö

#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	bool existRemain[42] = { false, };
	int number;
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> number;
		existRemain[number % 42] = true;
	}

	for (int i = 0; i < 42; i++)
	{
		if (existRemain[i] == true)
			count++;
	}

	cout << count;

	return 0;
}