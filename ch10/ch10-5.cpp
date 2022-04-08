#include <iostream>  
#include <vector>
using namespace std;

class Circle
{
	int x, y;
	int radius;
public:
	Circle() : x{0}, y{0}, radius{0} {}
	Circle(int x, int y, int r) : x{x}, y{y}, radius{r} {}
	void show();
};
void Circle::show() {
  cout << "radius : " << radius << "  @(" << x << ", " << y << ")" << endl;
}

int main()
{
	vector<Circle> cv;
	cv.push_back(Circle());
	cv.push_back(Circle(1, 1, 5));
	cv.push_back(Circle(1, 50, 25));

	for (auto c : cv)
		c.show();

	return (0);
}
