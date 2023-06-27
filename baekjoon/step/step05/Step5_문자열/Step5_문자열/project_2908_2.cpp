//9. »ó¼ö _2

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;

	char temp = a.front();
	a.front() = a.back();
	a.back() = temp;

	temp = b.front();
	b.front() = b.back();
	b.back() = temp;

	string max = "";
	for (int i = 0; i < a.length(); i++)
	{
		max = (a.at(i) == b.at(i) ? "" : (a.at(i) > b.at(i) ? a : b));
		if (max.empty())
			continue;
		else
			break;
	}
	cout << max;

	return 0;
}