//7. 달팽이는 올라가고 싶다

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b, v;

	int day;

	cin >> a >> b >> v;
	
	v -= a;

	day = static_cast<int>(ceil((v / static_cast<double>(a - b)))) + 1;
	
	cout << day;

	return 0;
}