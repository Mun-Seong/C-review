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
		cout << "이름과 점수>> ";
		cin >> name >> score;
		if (checkInputError())
		// 점수(score)를 숫자로 입력하지 않으면 오류
			continue;
		if (scoreMap.find(name) != scoreMap.end()) 
		{    // name이 이미 맵에 있는 경우
			cout << name << "의 점수를 수정할 수 없음" << endl;
			break;
		}
		// 맵에 없는 사람이 입력된 경우, 맵에 저장
		scoreMap.insert(make_pair(name, score));
		// scoreMap[name] = score;
		break;
	} while(true);
}

void GradeManager::search()
{
	string name;
	cout << "이름>> ";
	cin >> name;
	if (scoreMap.find(name) == scoreMap.end())
		cout << name << "은 없는 사람임" << endl;
	else
	{
		int score = scoreMap[name];  // 점수알아내기
		cout << name << "의 점수는 " << score << endl;
	}
}

bool GradeManager::checkInputError()
{
	if (cin.fail()) // 정수대신 문자열이 입력되어 오류 발생시
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "입력 오류" << endl;
		return true; // 오류 있음
	}
	else
		return false; // 오류 없음
}

void GradeManager::run()
{
	int menu;
	cout << "***** 점수관리 프로그램 "<< program << "을 시작합니다 *****" << endl;
	while (true)
	{
		cout << "입력:1, 조회:2, 종료:3 >> ";
		cin >> menu;

		if (checkInputError()) // 메뉴를 숫자 입력하지 않으면 오류 발생
			continue;
		switch (menu)
		{
		case 1: insert(); break;
		case 2: search(); break;
		case 3: cout << "프로그램을 종료합니다..."; 
			return;
		}
	}
}  

int main()
{
	GradeManager gm("HIGH SCORE");
	gm.run();
}