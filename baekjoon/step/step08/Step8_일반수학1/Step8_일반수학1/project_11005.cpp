//2. 진법 변환 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int n;
	int b;
	string  result;

	cin >> n >> b;

	int index = 0;
	while (n > 0)
	{
		int tmp = n % b;

		if (0 <= tmp && tmp <= 9)
			result.insert(0, sizeof(char), tmp + '0');
		else //'A'~'Z'
			result.insert(0, sizeof(char), (tmp - 10 + 'A'));

		n /= b;
		index++;
	}

	cout << result;

	return 0;
}