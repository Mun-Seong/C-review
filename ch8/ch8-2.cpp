#include <iostream>
#include <string>
using namespace std;

class Circle
{
	int radius;
public:
	Circle(int radius=0) { this->radius = radius; }
	int		getRadius() { return radius; }
	void	setRadius(int radius) {this->radius = radius; }
	double	getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle
{
	string name;
public:
	NamedCircle() : NamedCircle(0, "") {}
	NamedCircle(int r, string n) : Circle(r) { name = n; }
	void	setName(int r, string n) { name = n; setRadius(r); }
	string	getName() { return (name); }
	void	show() { cout << "r = " << getRadius() << name << endl; }
};

class CircleManager
{
	NamedCircle *ncs;
	size_t		size;
public:
	CircleManager(int n = 0) { size = n; ncs = new NamedCircle[size]; }
	~CircleManager() { delete[] ncs; }
	void	inout()
	{
		cout << size << "circles input." << endl;
		int temp;
		string t;
		for (int i=0;i<size;i++)
		{
			cout << i+1 << ">>";
			cin >> temp;
			cin >> t;
			ncs[i].setName(temp, t);
		}
	}
	void	allshow()
	{
		for (int i=0;i<size;i++)
		{
			cout << i+1 << ">>";
			cout << ncs[i].getRadius() << ' ' << ncs[i].getName() << endl;
		}
	}
	NamedCircle	biggest()
	{
		NamedCircle temp;
		for (int i=0;i<size;i++)
		{
			if (temp.getRadius() <= ncs[i].getRadius())
				temp.setName(ncs[i].getRadius(), ncs[i].getName());
		}
		cout << "biggest circle is " << temp.getName() << endl;
	}
};

int main()
{
	CircleManager cm(5);
	cm.inout();
	cout << "==============" << endl;
	cm.allshow();
	cout << "==============" << endl;
	cm.biggest();

	return (0);
}