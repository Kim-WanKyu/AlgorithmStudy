//8. �ܾ��� ����

#include <iostream>
#include <sstream>
#include <string>

using namespace std;


int main()
{
	string str;
	getline(cin, str);	//������ ������ ���ڿ� �Է�

	stringstream ss(str);	//stringstream�� str����

	int count = 0;

	string temp;
	while (getline(ss, temp, ' '))	//ss ���ڿ���Ʈ���� ' '���� �о temp�� ���� / �� ���� ������ �ݺ�
	{
		if (temp.length() > 0)	//temp�� "" �� �ƴϸ� count +1
			count++;
	}

	cout << count;

	return 0;
}