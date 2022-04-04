#include <iostream>
#include <cstring>
using namespace std;

class Book
{
	char	*title;   // ���� ���ڿ�
	int		price;     // ����
public:
	//������ ���� ������
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
	{ cout << title << ' ' << price << "��" << endl; }
};

int main()
{
	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}
