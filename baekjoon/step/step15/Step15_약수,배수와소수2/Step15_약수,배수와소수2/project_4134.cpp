//5. 다음 소수

#include <iostream>
#include <algorithm>

long long int getNextPrime(long long int num);

using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		long long int num;
		cin >> num;

		cout << getNextPrime(num) << '\n';
	}

	return 0;
}

long long int getNextPrime(long long int num)
{
	long long int prime = num;
	
	if (prime < 2)
		prime = 2;

	while (true)
	{
		bool isPrime = true;

		for (long long int i = 2; i * i <= prime; i++)
		{
			if (prime % i == 0)
			{
				isPrime = false;
				break;
			}
		}
		
		if (isPrime == true)
			break;

		prime++;
	}

	return prime;
}