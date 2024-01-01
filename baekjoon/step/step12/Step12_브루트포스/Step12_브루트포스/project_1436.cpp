//5. ¿µÈ­°¨µ¶ ¼ò

#include <iostream>
#include <string>

using namespace std;

class Class666 {
public:
	static bool Is666(int num)
	{
		bool is666 = false;

		string strNum = to_string(num);

		for (int i = 0; i < strNum.length() - 2; i++)
		{
			if (strNum[i] == '6' && strNum[i + 1] == '6' && strNum[i + 2] == '6')
			{
				is666 = true;
				break;
			}
		}

		return is666;
	}
};

int main()
{
	int n;

	cin >> n;

	if (n == 1)
	{
		cout << 666;
	}
	else
	{
		int num = 1665;
		int count = 1;
		while (true)
		{
			if (Class666::Is666(num))
			{
				count++;
			}
			if (count == n)
			{
				break;
			}
			num++;
		}

		cout << num;
	}

	return 0;
}