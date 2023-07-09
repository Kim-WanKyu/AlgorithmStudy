//6. 분수찾기

#include <iostream>

using namespace std;

int main()
{
	int x;

	cin >> x;
	int index = 0;
	while (true)
	{
		x -= index;

		if (x <= 0)
			break;

		index++;
	}
	int remain = 0 - x;

	int front, back;
	if (index % 2 == 0)
	{
		front = index;
		back = 1;

		for (int i = 0; i < remain; i++)
		{
			front -= 1;
			back += 1;
		}
	}
	else {
		front = 1;
		back = index;

		for (int i = 0; i < remain; i++)
		{
			front += 1;
			back -= 1;
		}
	}

	cout << front << '/' << back;

	return 0;
}