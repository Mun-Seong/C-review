#include <iostream>
#include <string>
using namespace std;
// ch5-3�� char*�� string���� ��ü
class Book
{
	string	title;   // ���� ���ڿ�
	int		price;     // ����
public:
	//������ ���� ������
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
	{ cout << title << ' ' << price << "��" << endl; }
};

int main()
{
	Book cpp("GoodC++", 10000);
	Book java = cpp;
	java.set("GoodJAVA", 12000);
	cpp.show();
	java.show();
}
