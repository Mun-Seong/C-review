#pragma once
#include "Shape.h"

enum {MAKE=1, MOVE, DRAW, AREA, PRINT, EXIT};

class ShapeHandler
{
private:
	Shape * p[100];
	int ShNum=0;
public:
	ShapeHandler();
	~ShapeHandler();
	void run();
private:
	void ShowMenu(void) const;
	void MakeShape(void);
	void MoveShape(void);
	void DrawShape(void);
	void AreaShape(void);
	void ShowAllShInfo(void) const;
protected:
	void MakeRectangle(void);
	void MakeEllipse(void);
	void MakeTriangle(void);
};
