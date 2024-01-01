//6. 소수 구하기

#include <iostream>

using namespace std;

void printBetweenPrime(int min, int max);

int main()
{
	int m, n;
	cin >> m >> n;

	printBetweenPrime(m, n);

	return 0;
}

void printBetweenPrime(int min, int max)
{
	int prime = min;

	if (prime < 2)
		prime = 2;

	while (prime <= max)
	{
		bool isPrime = true;

		for (int i = 2; i * i <= prime; i++)
		{
			if (prime % i == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime == true)
		{
			cout << prime << '\n';
		}
		prime++;
	}
}