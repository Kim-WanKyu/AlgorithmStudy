//4. 중앙 이동 알고리즘

#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int r = 2;

	for (int i = 0; i < n; i++)
	{
		r = r * 2 - 1;
	}
	cout << r * r;

	return 0;
}