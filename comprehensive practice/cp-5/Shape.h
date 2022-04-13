#pragma once

class Shape
{
	int	ShID;
	int x, y;
public:
	Shape(int ID, int x, int y) { ShID = ID; this->x = x; this->y = y; }
	Shape(const Shape & ref) { ShID = ref.ShID; x = ref.x; y = ref.y; }
	int	getShID() const { return (ShID); }
	virtual	double	getArea() = 0;
	virtual void	draw() = 0;
	void	move(int x, int y);
	void	showShInfo() const;
};