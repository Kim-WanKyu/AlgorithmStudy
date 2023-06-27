//8. 단어의 개수

#include <iostream>
#include <sstream>
#include <string>

using namespace std;


int main()
{
	string str;
	getline(cin, str);	//공백을 포함한 문자열 입력

	stringstream ss(str);	//stringstream에 str연결

	int count = 0;

	string temp;
	while (getline(ss, temp, ' '))	//ss 문자열스트림을 ' '까지 읽어서 temp에 저장 / 다 읽을 때까지 반복
	{
		if (temp.length() > 0)	//temp가 "" 이 아니면 count +1
			count++;
	}

	cout << count;

	return 0;
}