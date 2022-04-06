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
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl; // price ��
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title ��
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl; // title, price, pages ��� ��
}
