#include <iostream>
#include <string>
using namespace std;
class Circle {
	string name;
	int radius;
public:
	Circle(int radius=1, string name="") { 
		this->radius = radius; this->name = name;
	}
	double getArea() { return 3.14*radius*radius; }
	string getName() { return name; } 
	friend ostream& operator << (ostream& outs, const Circle& c);  // <<�� ������ ����
	friend istream& operator >> (istream& ins, Circle& c);   // >>�� ������ ����
};
ostream& operator<< (ostream& outs, const Circle& c)
{
	outs << "(������ " << c.radius << "�� " << c.name << ") ";
	return (outs);
}

istream& operator >> (istream& ins, Circle& c)
{
	cout << "������ >> ";
	ins >> c.radius;
	cout << "�̸� >> ";
	ins >> c.name;

	return (ins);
}

int main()
{
	Circle d, w;
	cin >> d >> w; // Ű���� �Է��� �޾� ��ü d�� w�� �ϼ�
	cout << d << w << endl; // ��ü d, w ���
}
