#pragma once
#include <iostream>
#include "Shape.h"

class Rectangle : public Shape
{
	int	width;
	int	height;
public:
	Rectangle(int ID, int x, int y, int w, int h)
	: Shape(ID, x, y), width(w), height(h) { }
	virtual double	getArea() { return (width * height); }
	virtual void	draw() { std::cout << "Rectangle" << std::endl; }
};