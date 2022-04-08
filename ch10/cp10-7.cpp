#include <iostream>
#include <string>
#include <map>
using namespace std;

class GradeManager {
	string program;
	map<string, int> scoreMap;
	bool checkInputError();
	void insert();
	void search();
public:
	GradeManager(string name);
	void run();
};

GradeManager::GradeManager(string program) { this->program = program;  }
void GradeManager::insert()
{
	string name;
	int score;
	do {
		cout << "�̸��� ����>> ";
		cin >> name >> score;
		if (checkInputError())
		// ����(score)�� ���ڷ� �Է����� ������ ����
			continue;
		if (scoreMap.find(name) != scoreMap.end()) 
		{    // name�� �̹� �ʿ� �ִ� ���
			cout << name << "�� ������ ������ �� ����" << endl;
			break;
		}
		// �ʿ� ���� ����� �Էµ� ���, �ʿ� ����
		scoreMap.insert(make_pair(name, score));
		// scoreMap[name] = score;
		break;
	} while(true);
}

void GradeManager::search()
{
	string name;
	cout << "�̸�>> ";
	cin >> name;
	if (scoreMap.find(name) == scoreMap.end())
		cout << name << "�� ���� �����" << endl;
	else
	{
		int score = scoreMap[name];  // �����˾Ƴ���
		cout << name << "�� ������ " << score << endl;
	}
}

bool GradeManager::checkInputError()
{
	if (cin.fail()) // ������� ���ڿ��� �ԷµǾ� ���� �߻���
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "�Է� ����" << endl;
		return true; // ���� ����
	}
	else
		return false; // ���� ����
}

void GradeManager::run()
{
	int menu;
	cout << "***** �������� ���α׷� "<< program << "�� �����մϴ� *****" << endl;
	while (true)
	{
		cout << "�Է�:1, ��ȸ:2, ����:3 >> ";
		cin >> menu;

		if (checkInputError()) // �޴��� ���� �Է����� ������ ���� �߻�
			continue;
		switch (menu)
		{
		case 1: insert(); break;
		case 2: search(); break;
		case 3: cout << "���α׷��� �����մϴ�..."; 
			return;
		}
	}
}  

int main()
{
	GradeManager gm("HIGH SCORE");
	gm.run();
}