#include <iostream>
using namespace std;

class Point
{
	double x, y;
public:
	Point() : Point(0, 0) {}
	Point(double xx, double yy) : x(xx), y(yy) {}
	void	showPoint() { cout << '(' << x << ", " << y << ')' << endl;}
	void	setX(double xx) {x = xx;}
	void	setY(double yy) {y = yy;}
};

int main()
{
	int n;
	cout << "객체의 수 입력 >";
	cin >> n;

	Point *ps = new Point[n];
	for (int i = 0; i < n; i++)
	{
		ps[i].setX(i);
		ps[i].setY(i + 1);
	}
	for (int i = 0; i < n; i++)
	{
		ps[i].showPoint();
	}
	delete[] ps;
}