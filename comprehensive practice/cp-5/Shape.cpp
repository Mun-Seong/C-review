#include "Shape.h"
#include <iostream>
using namespace std;

void Shape::move(int x, int y)
{
	this->x += x;
	this->y += y;
	cout << "< <" << this->x << ", " << this->y << "> > :"; 
}

void Shape::showShInfo() const
{
	cout << "Shape ID : " << ShID << endl;
	cout << "< <" << this->x << ", " << this->y << "> >" << endl;
	cout << "Shape Kinds :";
}
