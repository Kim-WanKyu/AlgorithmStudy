//5. 숫자의 합

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string numStr;
	int sum = 0;

	cin >> n;
	cin >> numStr;

	for (int i = 0; i < n; i++)
	{
		sum += static_cast<int> (numStr.at(i) - '0');
	}

	cout << sum;

	return 0;
}