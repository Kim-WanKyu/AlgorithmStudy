//2. 직사각형에서 탈출

#include <iostream>

using namespace std;

int main()
{
	int x, y, w, h;
	int distance;

	cin >> x >> y >> w >> h;

	distance = ((x - 0 < w - x) ? x - 0 : w - x) < (((y - 0 < h - y) ? y - 0 : h - y)) ? ((x - 0 < w - x) ? x - 0 : w - x) : (((y - 0 < h - y) ? y - 0 : h - y));

	cout << distance;

	return 0;
}