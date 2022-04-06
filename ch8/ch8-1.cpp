#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;		// 반지름
public:
	Circle(int radius=0) { this->radius = radius; }
	int		getRadius() { return radius; }
	void	setRadius(int radius) {this->radius = radius; }
	double	getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : protected Circle
{
	string name;
public:
	NamedCircle(int r, string n) : Circle(r) { name = n; }
	void	show() { cout << "r = " << getRadius() << name << endl; }
};

int main()
{
	NamedCircle waffle(3, "waffle");
	waffle.show();
}