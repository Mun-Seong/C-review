#include <iostream>

using namespace std;

class Rect
{
	int Widht, Height, Area;
public:
	Rect(int w, int h) {Widht = w; Height = h;}
	void	computeArea() {Area = Widht * Height;}
	int		getArea() {return (Area);}
	int 	getHeight() {return (Height);}
	int		getWidth() {return (Widht);}
};

int main()
{
	Rect r1(10, 3), r2(2, 7);
	r1.computeArea();
	r2.computeArea();

	cout << "r1(w, h, a) : " 
	<< r1.getWidth() << ' ' << r1.getHeight() << ' ' << r1.getArea() << endl;

	cout << "r2(w, h, a) : " 
	<< r2.getWidth() << ' ' << r2.getHeight() << ' ' << r2.getArea() << endl;

	return (0);
}