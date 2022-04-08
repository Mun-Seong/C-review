#include <iostream>  
#include <string>
#include <vector>
using namespace std;
class Book {
	string title; // å �̸�
	string author; // ����
	int year;
public:
	Book() {};
	Book(string title, string author, int year) : 
	title(title), author(author), year(year) {}
	void set(string t, string a, int y)
	{ 
		title=t;
		author=a;
		year=y; 
	}
	string getAuthor() { return (author); }
	int getYear() { return (year); }
	void show();
};
void Book::show()
{
	cout << year << "�⵵, " << title << ", " << author << endl;
}

class BookManager
{
	vector<Book> v;
	void searchByAuthor();
	void searchByYear();
	void bookIn();
public:
	void run();
};
void BookManager::searchByAuthor()
{
	string sa;
	cout << "�˻��� ���ڸ� �Է�>> ";
	cin >> sa;
	for (auto b : v)
	{
		if (b.getAuthor() == sa)
		{
			b.show();
			return ;
		}
	}
}
void BookManager::searchByYear()
{
	int sy;
	cout << "�˻��� �⵵ �Է�>> ";
	cin >> sy;
	for (auto b : v)
	{
		if (b.getYear() == sy)
		{
			b.show();
			return ;
		}
	}
}

void BookManager::bookIn()
{
	string title, author;
	int year;
	Book b;
	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
	while (true)
	{
		cout << "�⵵ >> ";
		cin >> year;
		if (year == -1) break ;
		cout << "å �̸� >> ";
		cin >> title;
		cout << "���� >> ";
		cin >> author;

		b.set(title, author, year);
		v.push_back(b);
	}
	cout << "�� �԰�� å�� " << v.size() << "���Դϴ�." << endl;
}
void BookManager::run()
{
	bookIn(); // �԰�
	searchByAuthor(); // ���ڷ� �˻�
	searchByYear(); // �⵵�� �˻�
}

int main()
{
	BookManager man;
	man.run();
}

