#include <iostream>
#include <cstring>
using namespace std;

const float PI = 3.1415926;

class Circle {
	int			radius;;	// ������
	char		*color;	// ���� ����
	static int	count;
public:
	Circle() : Circle(1, "White") {}
	Circle(int r, const char *c)
	{ 
		radius = r;
		color = new char[strlen(c) + 1];
		strcpy(color, c);
		count++;
		cout << "������" << endl;
	}
	~Circle() { count--; cout << "�Ҹ���" << endl; delete[] color; }
	// ���� ������
	Circle (const Circle& c)
	{
		radius = c.radius;
		color = new char [strlen(c.color) + 1];
		strcpy(color, c.color);
		count++;
		cout << "���� ������" << endl; 
	}
	// ���� ������
	Circle& operator=(const Circle & op2)
	{
		if (this == &op2)			// for a=a;
			return *this;
		delete [] color;
		radius = op2.radius; 
		color = new char [strlen(op2.color)+1];  
		strcpy(color, op2.color);
		cout << "���� ������" << endl;
		return *this;				// for a=b=c;
	};
	// �̵� ������
	Circle(const Circle&& c)
	{
		radius = c.radius;
		color = c.color;
		cout << "�̵� ������" << endl;
	}
	//�̵� ���� ������
	Circle& operator= (const Circle &&op2)
	{
		radius = op2.radius;
		color = op2.color;
		cout << "�̵� ���� ������" << endl;
	}
	float	getArea() const { return (PI * radius * radius); }
	float	getPerimeter() const { return (PI * 2 *radius); }
	bool	is_equal(Circle &c1, Circle &c2)
	{ return (c1.radius == c2.radius); }
	void	print() const
	{
		cout << radius << " : " << color << endl;
	}
	static void count_print()
	{ cout << "�� ������ �� : " << count << endl; }
};
int Circle::count = 0;

int main()
{
	Circle a(10, "Red"), b;
	Circle::count_print();
	cout << "========================" << endl;
	Circle c(a);
	Circle::count_print();
	cout << "========================" << endl;
	b = move(c);
	Circle::count_print();
	cout << "========================" << endl;
	Circle::count_print();
	
	return (0);
}