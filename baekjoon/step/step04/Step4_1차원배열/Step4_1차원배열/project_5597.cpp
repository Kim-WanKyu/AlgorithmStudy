//7. 과제 안 내신 분..?

#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	bool arr[30] = { false, };

	for (int i = 0; i < 28; i++)
	{
		int sendedIndex;

		cin >> sendedIndex;
		arr[sendedIndex-1] = true;
	}

	for (int i = 0; i < 30; i++) {
		if (arr[i] == false)
			cout << i + 1 << '\n';
	}

	return 0;
}