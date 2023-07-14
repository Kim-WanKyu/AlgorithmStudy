//1. 배수와 약수

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	while (true)
	{
		cin >> a >> b;

		string msg;

		if (a == 0 && b == 0)
		{
			break;
		}
		else if (a > b)
		{
			if (a % b == 0)
				msg = "multiple\n";
			else
				msg = "neither\n";
		}
		else if (a < b)
		{
			if (b % a == 0)
				msg = "factor\n";
			else
				msg = "neither\n";
		}

		cout << msg;
	}

	return 0;
}