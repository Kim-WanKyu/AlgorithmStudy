//4. 나는야 포켓몬 마스터 이다솜

#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;

	cin >> n >> m;

	map<int, string> pokeCollection;
	map<string, int> pokeCollectionByName;

	for (int i = 1; i <= n; i++)
	{
		string pokeName;
		cin >> pokeName;
		pokeCollection.insert({ i, pokeName });
		pokeCollectionByName.insert({ pokeName,i });
	}

	for (int i = 0; i < m; i++)
	{
		string input;
		cin >> input;

		if (pokeCollectionByName.find(input) != pokeCollectionByName.end())
		{
			cout << pokeCollectionByName.at(input) << '\n';
		}
		else
		{
			cout << pokeCollection.at(stoi(input)) << '\n';
		}
	}

	return 0;
}