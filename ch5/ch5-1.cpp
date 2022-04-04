#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle() : Circle(1) {}
	Circle(int r) : radius(r) {}
	int		getRadius() { return (radius); }
	void	setRadius(int r) { radius = r; }
	void	show() { cout << "radius : " << getRadius() << endl; }
};
//void	increaseBy(Circle a, Circle b)
void	increaseBy(Circle &a, Circle b)
{
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}

int main()
{
	Circle r1(3), r2(5);
	r1.show();
	increaseBy(r1, r2);
	r1.show();

	return (0);
}