//6. ��Ʈ�λ��̵�

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string n;

	cin >> n;

	sort(&n[0], &n[0] + n.size(), greater<>());

	cout << n;

	return 0;
}