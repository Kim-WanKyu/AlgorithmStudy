//3. 네 번째 점

#include <iostream>

using namespace std;

int main()
{
	int x[4];
	int y[4];

	int pointX, pointY;
	int countPointX = 0, countPointY = 0;

	cin >> x[0] >> y[0];

	for (int i = 1; i < 3; i++)
	{
		cin >> x[i] >> y[i];
		if (x[i] != x[0])
		{
			pointX = x[i];
			countPointX++;
		}
		if (y[i] != y[0])
		{
			pointY = y[i];
			countPointY++;
		}
	}

	x[3] = countPointX == 2 ? x[0] : pointX;
	y[3] = countPointY == 2 ? y[0] : pointY;

	cout << x[3] << ' ' << y[3];

	return 0;
}