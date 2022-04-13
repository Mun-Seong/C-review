#pragma once
#include <iostream>
#include "Shape.h"

class Ellipse : public Shape
{
	int	width;
	int	height;
public:
	Ellipse(int ID, int x, int y, int w, int h)
	: Shape(ID, x, y), width(w), height(h) { }
	virtual double	getArea() { return ( width * height * 3.14 * 1./4); }
	virtual void	draw() { std::cout << "Ellipse" << std::endl; }
};