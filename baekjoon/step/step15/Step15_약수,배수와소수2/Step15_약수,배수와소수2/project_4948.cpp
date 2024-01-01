//7. 베르트랑 공준

#include <iostream>

using namespace std;

int main()
{
	while (true)
	{
		int n;

		cin >> n;

		if (n == 0)
			break;

		int count = 0;

		for (int i = n + 1; i <= 2 * n; i++)
		{
			bool isPrime = true;

			for (int j = 2; j * j <= i; j++)
			{
				if (i % j == 0)
				{
					isPrime = false;
					break;
				}
			}
			if (isPrime)
			{
				count++;
			}
		}
		cout << count << '\n';
	}

	return 0;
}