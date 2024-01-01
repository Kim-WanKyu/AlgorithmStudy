//6. º≥≈¡ πË¥ﬁ

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int count = 0;
	int use5Count = 0;
	bool is5 = true;

	while (true)
	{
		if (n > 0)
		{
			if (is5)
			{
				if (n >= 5)
				{
					n -= 5;
					use5Count++;
					count++;
				}
				else
				{
					is5 = false;
				}
			}
			else
			{
				is5 = false;
				n -= 3;
				count++;
				if (n == 0)
				{
					cout << count;
					break;
				}
				if (n < 0)
				{
					if (use5Count > 0)
					{
						n += 5;
						use5Count--;
						count -= 1;
					}
					else
					{
						cout << -1;
						break;
					}
				}
			}
		}
		else if (n == 0)
		{
			cout << count;
			break;
		}
	}

	return 0;
}