//6. 소인수분해

#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int divisor = 2;
	while (n > 1)
	{
		if (n % divisor == 0)
		{
			n /= divisor;
			cout << divisor << '\n';
		}
		else
		{
			divisor++;
		}
	}

	return 0;
}