//2. Å·, Äý, ·è, ºñ¼ó, ³ªÀÌÆ®, Æù

#include <iostream>

using namespace std;

int main()
{
	int needs[6] = { 1, 1, 2, 2, 2, 8 };
	int* pieces = new int[6];

	for (int i = 0; i < 6; i++)
	{
		cin >> pieces[i];
		cout << needs[i] - pieces[i] << " ";
	}

	delete[] pieces;

	return 0;
}