#include <iostream>
using namespace std;

class Point
{
	double X, Y;
public:
	Point() {X = 0; Y = 0;}
	Point(double xx, double yy) {this->X = xx; this->Y = yy;}
	double	getX() {return (X);}
	double	getY() {return (Y);}
	void	setX(double xx) {X = xx;}
	void	setY(double yy) {Y = yy;}
	void	showPoint() {cout << 
	"(" << getX() << ", " << getY() << ")" << endl;}
};
int main()
{
	Point p1, p2(15, 0.12);
	p1.showPoint();
	p2.showPoint();

	p1.setX(3.14);
	p1.setY(8.15);
	p1.showPoint();

	return (0);
}