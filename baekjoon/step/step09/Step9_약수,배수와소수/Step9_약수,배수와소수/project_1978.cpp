//4. 소수 찾기

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;

	cin >> n;
	
	int primeCount = 0;

	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;

		if (number > 1)
		{
			bool isPrime = true;

			for (int i = 2; i < number; i++)
			{
				if (number % i == 0)
				{
					isPrime = false;
					break;
				}
			}
			if (isPrime)
				primeCount++;
		}

	}

	cout << primeCount;

	return 0;
}