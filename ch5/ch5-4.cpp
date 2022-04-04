#include <iostream>
#include <string>
using namespace std;
// ch5-3의 char*를 string으로 대체
class Book
{
	string	title;   // 제목 문자열
	int		price;     // 가격
public:
	//제작한 복사 생성자
	Book(Book &b)
	{
		this->title = b.title;
		this->price = b.price;
	}
	Book(string title, int price)
	{
		this->title = title;
		this->price = price;
	}
	void set(string title, int price)
	{
		this->title = title;
		this->price = price;
	}
	void show() 
	{ cout << title << ' ' << price << "원" << endl; }
};

int main()
{
	Book cpp("GoodC++", 10000);
	Book java = cpp;
	java.set("GoodJAVA", 12000);
	cpp.show();
	java.show();
}
