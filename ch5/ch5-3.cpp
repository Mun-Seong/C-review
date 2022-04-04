#include <iostream>
#include <cstring>
using namespace std;

class Book
{
	char	*title;   // 제목 문자열
	int		price;     // 가격
public:
	//제작한 복사 생성자
	Book(Book &b)
	{
		this->title = new char;
		strcpy(this->title, b.title);
		this->price = b.price;
	}
	Book(const char *title, int price)
	{
		this->title = new char;
		strcpy(this->title, title);
		this->price = price;
	}
	~Book() { delete title; }
	void set(const char *title, int price)
	{
		strcpy(this->title, title);
		this->price = price;
	}
	void show() 
	{ cout << title << ' ' << price << "원" << endl; }
};

int main()
{
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}
