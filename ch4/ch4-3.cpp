#include <iostream>
#include <string>
using namespace std;

class Person {
  string name; 
  string tel; 
public:
  Person() : name(""), tel("") {}
  string getName() { return name; }
  string getTel() { return tel; }
  void set(string name, string tel) { this->name = name; this->tel = tel; }
};

class PersonManager
{
	Person	*p;
	int		size;
public:
	PersonManager(int n):size(n) { p = new Person[size]; }
	~PersonManager() {delete[] p;}
	void	input()
	{
		string n, t;
		for (int i = 0; i < size; i++)
		{
			cout << "name(string) : ";
			cin >> n;
			cout << "tel(stirng) : ";
			cin >> t;
			p[i].set(n, t);
		}
	}
	void	show()
	{
		cout << "모든 사람은 " << endl;
		for (int i = 0; i < size; i++)
			cout << p[i].getName() << " : " << p[i].getTel() << endl;
	}
	void	search()
	{
		string name;
		cout << "전화번호 검색합니다. 이름을 입력하세요>>";
		cin >> name;
		for(int i=0; i<3; i++) {
			if(name == p[i].getName()) {
				cout << "전화 번호는 " << p[i].getTel() << endl;
				return;
			}
		}
		cout << "없는 사람입니다" << endl;
	}
};

int main()
{
	int n;
	cout << "인원 수 입력 : ";
	cin >> n;
	PersonManager mgr(n);
	mgr.input();
	mgr.show();

	mgr.search();
	return (0);
}
