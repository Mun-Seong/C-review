#include <string>
#include <iostream>
using namespace std;

class Book;
bool	operator== (Book b, int p);
bool	operator== (Book b, string t);
bool	operator== (Book b1, Book b2);

class Book {
	string title;
	int price;
	int pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	friend bool operator== (Book b, int p);
	friend bool operator== (Book b, string t);
	friend bool operator== (Book b1, Book b2);
};
bool	operator== (Book b, int p) { return (b.price == p); }
bool	operator== (Book b, string t) { return (b.title == t); }
bool	operator== (Book b1, Book b2)
{ 
	return ((b1.price == b2.price) && (b1.pages == b2.pages) 
	&& (b1.title == b2.title)); 
}
int main()
{
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl; // price 비교
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
	if (a == b) cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교
}
