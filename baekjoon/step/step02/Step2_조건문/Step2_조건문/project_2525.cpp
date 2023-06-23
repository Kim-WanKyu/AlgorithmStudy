//6. ¿Àºì ½Ã°è

#include <iostream>

using namespace std;

int main()
{
	int h, m;
	int time;

	cin >> h >> m >> time;

	cout << (h + (m + time) / 60) % 24 << " " << (m + time) % 60;

	return 0;
}