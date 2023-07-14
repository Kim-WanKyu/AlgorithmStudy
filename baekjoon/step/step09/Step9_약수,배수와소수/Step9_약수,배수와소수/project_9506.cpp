//3. 약수들의 합

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;

	while (true)
	{
		cin >> n;
		if (n == -1)
			break;

		int index = 0;
		int sumFactor = 0;

		string msgLine = "";
		msgLine += to_string(n);
		msgLine += " = ";

		while (n > index)
		{
			index++;

			if (n % index == 0)
			{
				if (n == index)
				{
					msgLine = msgLine.substr(0, msgLine.length() - 3);
					msgLine += '\n';
					break;
				}

				sumFactor += index;

				msgLine += to_string(index);
				msgLine += " + ";
			}
		}

		if (sumFactor == n)
		{
			cout << msgLine;
		}
		else
		{
			cout << n << " is NOT perfect.\n";
		}
	}

	return 0;
}