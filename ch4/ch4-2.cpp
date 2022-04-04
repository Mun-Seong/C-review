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

class Pointmanager
{
	Point	*p;
	int		size;
public:
	Pointmanager(int n) : size(n) { p = new Point[size]; }
	~Pointmanager() { delete[] p; }
	void	input()
	{
		double xx, yy;
		for (int i = 0; i < size; i++)
		{
			cout << "x(double) : ";
			cin >> xx;
			cout << "y(double) : ";
			cin >> yy;
			p[i].setX(xx);
			p[i].setY(yy);
		}
	}
	void	show()
	{
		cout << "모든 좌표는 " << endl;
		for (int i = 0; i < size; i++)
			p[i].showPoint();
	}
};

int main()
{
	int n;
	cout << "좌표의 개수 입력 : ";
	cin >> n;
	Pointmanager mgr(n);
	mgr.input();
	mgr.show();

	return (0);
}
