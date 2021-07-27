#include "dot.h"
#include <math.h>
#include <iostream>
Dot::Dot()
{
	x = 0; y = 0;
}
Dot::Dot(double x, double y)
{
	this->x = x;
	this->y = y;
	std::cout << "x = " << x << "y =" << y;
}
double Dot::distanceTo(Dot p)
{
	return sqrt(pow((p.x -x ), 2) + pow((p.y-y), 2));
}