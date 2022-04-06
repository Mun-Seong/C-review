#include <iostream>
#include <cstring>
using namespace std;

const float PI = 3.1415926;

class Circle {
	int			radius;;	// 반지름
	char		*color;	// 원의 색상
	static int	count;
public:
	Circle() : Circle(1, "White") {}
	Circle(int r, const char *c)
	{ 
		radius = r;
		color = new char[strlen(c) + 1];
		strcpy(color, c);
		count++;
		cout << "생성자" << endl;
	}
	~Circle() { count--; cout << "소멸자" << endl; delete[] color; }
	// 복사 생성자
	Circle (const Circle& c)
	{
		radius = c.radius;
		color = new char [strlen(c.color) + 1];
		strcpy(color, c.color);
		count++;
		cout << "복사 생성자" << endl; 
	}
	// 대입 연산자
	Circle& operator=(const Circle & op2)
	{
		if (this == &op2)			// for a=a;
			return *this;
		delete [] color;
		radius = op2.radius; 
		color = new char [strlen(op2.color)+1];  
		strcpy(color, op2.color);
		cout << "대입 연산자" << endl;
		return *this;				// for a=b=c;
	};
	// 이동 연산자
	Circle(const Circle&& c)
	{
		radius = c.radius;
		color = c.color;
		cout << "이동 연산자" << endl;
	}
	//이동 대입 연산자
	Circle& operator= (const Circle &&op2)
	{
		radius = op2.radius;
		color = op2.color;
		cout << "이동 대입 연산자" << endl;
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
	{ cout << "총 생성된 원 : " << count << endl; }
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