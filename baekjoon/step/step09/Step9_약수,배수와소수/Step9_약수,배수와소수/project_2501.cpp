//2. 약수 구하기

#include <iostream>

using namespace std;

int main()
{
	int n, k;

	cin >> n >> k;

	int index = 0;
	while (k > 0 && n > index)
	{
		index++;

		if (n % index == 0)
		{
			k--;

			if (n == index)
				break;
		}
	}

	if (k > 0)
		cout << 0;
	else
		cout << index;

	return 0;
}