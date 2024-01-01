//8. °ñµå¹ÙÈå ÆÄÆ¼¼Ç

#include <iostream>

using namespace std;

void makePrime(bool eratos[1000000]);

int main()
{
	bool* eratos = new bool[1000000];
	for (int i = 0; i < 1000000; i++)
	{
		eratos[i] = true;
	}

	eratos[1 - 1] = false;

	makePrime(eratos);

	int t;
	cin >> t;


	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;

		int count = 0;

		for (int j = 2; j <= (n / 2); j++)
		{
			if (eratos[j - 1] == true && eratos[n - j - 1] == true)
			{
				count++;
			}
		}
		
		cout << count << '\n';
	}

	delete[] eratos;

	return 0;
}


void makePrime(bool eratos[1000000]) {
	
	for (int i = 2; i <= 1000000; i++)
	{
		if (eratos[i - 1] == false)
			continue;
		else
		{
			int num = i;
			for (int j = num + num; j <= 1000000; j += num)
			{
				eratos[j - 1] = false;
			}
		}
	}
}