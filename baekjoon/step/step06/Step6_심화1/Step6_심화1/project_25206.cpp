//8. ���� ������

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string tmpSubjectStr;

	double finalScore = 0.0;
	int totalScoreCount = 0;

	while (true)
	{
		getline(cin, tmpSubjectStr);

		if (tmpSubjectStr.length() <= 0)
			break;

		stringstream ss(tmpSubjectStr);	//stringstream�� tmpSubjectsStr����
		string temp;

		string subjectArr[] = { "", "", "" };	//�����, ����, ���
		int subjectScoreIndex = 0;

		while (getline(ss, temp, ' '))	//ss ���ڿ���Ʈ���� ' '���� �о temp�� ���� / �� ���� ������ �ݺ�
		{
			if (temp.length() > 0)	//temp�� "" �̸� break;
			{
				subjectArr[subjectScoreIndex] = temp;
				subjectScoreIndex++;
			}
			else
			{
				break;
			}
		}

		if (subjectArr[2] != "P")
		{
			double score;

			if (subjectArr[2] == "A+")
				score = 4.5;
			else if (subjectArr[2] == "A0")
				score = 4.0;
			else if (subjectArr[2] == "B+")
				score = 3.5;
			else if (subjectArr[2] == "B0")
				score = 3.0;
			else if (subjectArr[2] == "C+")
				score = 2.5;
			else if (subjectArr[2] == "C0")
				score = 2.0;
			else if (subjectArr[2] == "D+")
				score = 1.5;
			else if (subjectArr[2] == "D0")
				score = 1.0;
			else if (subjectArr[2] == "F")
				score = 0.0;

			totalScoreCount += static_cast<int>(stod(subjectArr[1]));
			finalScore += (stod(subjectArr[1]) * score);
		}
	}

	finalScore /= totalScoreCount;

	
	cout << finalScore;
	
	return 0;
}