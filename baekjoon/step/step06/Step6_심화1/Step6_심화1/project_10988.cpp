//4. �Ӹ�������� Ȯ���ϱ�

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;

	cin >> str;

	bool isPelin = true;

	for (int i = 0; i < (str.length() / 2); i++)
	{
		if (str.at(i) != str.at(str.length() - i - 1))
		{
			isPelin = false;
			break;
		}
	}

	cout << isPelin;

	return 0;
}