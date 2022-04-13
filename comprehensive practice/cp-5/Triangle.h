#pragma once
#include <iostream>
#include "Shape.h"

class Triangle : public Shape
{
	int	width;
	int	height;
public:
	Triangle(int ID, int x, int y, int w, int h)
	: Shape(ID, x, y), width(w), height(h) { }
	virtual double	getArea() { return ( width * height * 1./2); }
	virtual void	draw() { std::cout << "Triangle" << std::endl; }
};