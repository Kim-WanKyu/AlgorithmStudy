//5. 알람 시계

#include <iostream>

using namespace std;

int main()
{
	int h, m;

	cin >> h >> m;

	if (m - 45 < 0)
		cout << ((h - 1) + 24) % 24 << " " << ((m - 45) + 60) % 60;
	else
		cout << h << " " << m - 45;

	return 0;
}