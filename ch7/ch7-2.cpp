#include <iostream>
#include <cstring>
using namespace std;

class Circle {
	int radius;;	// 반지름
	char *color;	// 원의 색상
public:
	Circle() : Circle(1, "White") {}
	Circle(int r, const char *c)
	{ 
		radius = r;
		color = new char[strlen(c) + 1];
		strcpy(color, c);
	}
	~Circle() { delete[] color; }
	Circle& operator=(const Circle & op2)
	{
	if (this == &op2)			// for a=a;
		return *this;
	delete [] color;
	radius = op2.radius; 
	color = new char [strlen(op2.color)+1];  
	strcpy(color, op2.color);
	return *this;				// for a=b=c;
	};
	void	show()
	{
		cout << radius << " : " << color << endl;
	}
};
int main()
{
	Circle c1, c2(1, "Blue"), c3(1, "Red");
	c1.show();
	c1 = c3;
	c1.show();
	c3 = c1 = c2;
	cout << endl;
	c1.show();
	c2.show();
	c3.show();

	return (0);
}
