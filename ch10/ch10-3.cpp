#include <iostream>
using namespace std;
class Comparable
{
public:
	virtual bool operator > (Comparable& op2)=0;
	virtual bool operator < (Comparable& op2)=0;
	virtual bool operator == (Comparable& op2)=0;
};

class Circle : public Comparable
{
	int radius;
public:
	Circle(int radius=1) { this->radius = radius; }
	int getRadius() { return radius; }
	virtual bool operator > (Comparable& op2)
	{
		Circle *t = (Circle *)&op2;
		return (radius > t->getRadius());
	}
	virtual bool operator < (Comparable& op2)
	{
		Circle *t = (Circle *)&op2;
		return (radius < t->getRadius());
	}
	virtual bool operator == (Comparable& op2)
	{
		Circle *t = (Circle *)&op2;
		return (radius == t->getRadius());
	}
};

template <class T>
T bigger(T a, T b) { // 두 개의 매개 변수를 비교하여 큰 값을 리턴
	if(a > b) return a;
	else return b;
}
int main()
{
	int a=20, b=50, c;
	c = bigger(a, b);
	cout << "20과 50중 큰 값은 " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	//클래스를 비교하지만 > 연산자에 대입오류
	//Circle y(bigger(waffle.getRadius(), pizza.getRadius()));
	cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;
}
