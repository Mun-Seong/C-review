#include <iostream>  
#include <string>
#include <vector>
using namespace std;
class Book {
	string title; // 책 이름
	string author; // 저자
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
	cout << year << "년도, " << title << ", " << author << endl;
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
	cout << "검색할 저자명 입력>> ";
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
	cout << "검색할 년도 입력>> ";
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
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
	while (true)
	{
		cout << "년도 >> ";
		cin >> year;
		if (year == -1) break ;
		cout << "책 이름 >> ";
		cin >> title;
		cout << "저지 >> ";
		cin >> author;

		b.set(title, author, year);
		v.push_back(b);
	}
	cout << "총 입고된 책은 " << v.size() << "권입니다." << endl;
}
void BookManager::run()
{
	bookIn(); // 입고
	searchByAuthor(); // 저자로 검색
	searchByYear(); // 년도로 검색
}

int main()
{
	BookManager man;
	man.run();
}

