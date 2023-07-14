//5. ¼Ò¼ö

#include <iostream>

using namespace std;

int main()
{
	int m, n;
	int sumPrime = 0, minPrime = 0;

	cin >> m >> n;

	for (int i = m; i <= n; i++)
	{
		if (i > 1)
		{
			int j = 2;
			bool isPrime = true;

			while (j < i)
			{
				if (i % j == 0)
				{
					isPrime = false;
					break;
				}

				j++;
			}

			if (isPrime)
			{
				sumPrime += i;
				if (minPrime == 0)
				{
					minPrime = i;
				}
			}
		}
	}

	if (sumPrime != 0)
	{
		cout << sumPrime << '\n' << minPrime;
	}
	else
	{
		cout << -1;
	}

	return 0;
}