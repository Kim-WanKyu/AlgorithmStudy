//7. 삼각형과 세 변

#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	while (true)
	{
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}
		else
		{
			int max = (a > b ? a : b) > c ? (a > b ? a : b) : c;

			if (max >= a + b + c - max)
			{
				cout << "Invalid\n";
			}
			else
			{
				if (a == b && b == c)
					cout << "Equilateral\n";
				else if (a != b && a != c && b != c)
					cout << "Scalene\n";
				else
					cout << "Isosceles\n";
			}
		}
	}

	return 0;
}