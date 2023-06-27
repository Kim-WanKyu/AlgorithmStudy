//4. 아스키 코드

#include <iostream>
#include <string>

using namespace std;

int main()
{
	char ch;

	cin >> ch;

	cout << static_cast<int>(ch);

	return 0;
}