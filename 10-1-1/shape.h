#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <iostream>
#include <vector>

class Shape {
public:
	Shape(int width_, int height_);
	virtual double getArea() = 0;
protected:
	int width;
	int height;
};

class Triangle :public Shape {
public:
	Triangle(int width_, int height_);
	virtual double getArea();
};

class Rectangle :public Shape {
public:
	Rectangle(int width_, int height_);
	virtual double getArea();
};

#endif
