//10. ´ÙÀÌ¾ó

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;

	cin >> str;

	int needTime = 0;
	for (int i = 0; i < str.length(); i++)
	{
		switch (str[i])
		{
		case 'A':
		case 'B':
		case 'C':
			needTime += 3;
			break;
		case 'D':
		case 'E':
		case 'F':
			needTime += 4;
			break;
		case 'G':
		case 'H':
		case 'I':
			needTime += 5;
			break;
		case 'J':
		case 'K':
		case 'L':
			needTime += 6;
			break;
		case 'M':
		case 'N':
		case 'O':
			needTime += 7;
			break;
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			needTime += 8;
			break;
		case 'T':
		case 'U':
		case 'V':
			needTime += 9;
			break;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			needTime += 10;
			break;
		}
	}

	cout << needTime;

	return 0;
}