//3. �����б�

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//���� �� ���ڿ� ���ظ�ŭ ����ϱ� ���� ����
	int longest = 0;

	//���ڿ� �迭 ���� �Ҵ� �� �� �Է�
	string* arr = new string[5];
	for (int i = 0; i < 5; i++)
	{
		string tmpStr;
		cin >> tmpStr;
		arr[i] = tmpStr;
		longest = longest >= tmpStr.length() ? longest : tmpStr.length();
	}

	//��� ���
	for (int j = 0; j < longest; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (j < arr[i].length())	//����Ϸ��� ������ �ε����� ����Ϸ��� �ش� ���ڰ� ���Ե� ���ڿ��� ���̺��� �۾ƾ� ��� �ƴϸ� ���̱� ����
				cout << arr[i].at(j);
		}
	}

	//���ڿ� �迭 �Ҵ� ����
	delete[] arr;

	return 0;
}