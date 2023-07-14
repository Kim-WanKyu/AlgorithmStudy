//5. ´ëÁö

#include <iostream>

using namespace std;

int main()
{
	int n;

	int maxX, minX, maxY, minY;
	maxX = maxY = -10001;
	minX = minY = 10001;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;

		maxX = x > maxX ? x : maxX;
		maxY = y > maxY ? y : maxY;
		minX = x < minX ? x : minX;
		minY = y < minY ? y : minY;
	}

	cout << (maxX - minX) * (maxY - minY);

	return 0;
}