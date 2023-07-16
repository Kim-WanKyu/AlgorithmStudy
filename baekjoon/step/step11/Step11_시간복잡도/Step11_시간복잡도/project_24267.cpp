//6. 알고리즘 수업 - 알고리즘의 수행 시간 6

#include <iostream>

using namespace std;

int main()
{
	int a;

	cin >> a;

	long long int count = 0;

	for (long long int i = 1; i <= a - 2; i++)
	{
		count += (1 + i) * i / 2;
	}

	cout << count << '\n' << 3;

	return 0;
}