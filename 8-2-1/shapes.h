#ifndef __SHAPES_H__
#define __SHAPES_H__

#include <iostream>
#include <string>
#include <math.h>
#include <cstring>
class Shape {
public:
	Shape();
	Shape(int xpos_, int ypos_, std::string brush_);

	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);
	void MakeCanvas(int canvas_width, int canvas_height);

protected:
	int xpos;
	int ypos;
	std::string brush;
	int** canvas;

	double area;
	int perimeter;
};

class Square :public Shape {
public:
	Square();
	Square(int xpos_, int ypos_, std::string brush_, int len_);
	void Fill(int canvas_width, int canvas_height);
private:
	int len;
};

class Rectangle :public Shape {
public:
	Rectangle();
	Rectangle(int xpos_, int ypos_, int width_, int height_, std::string brush_);
	void Fill(int canvas_width, int canvas_height);
private:
	int width;
	int height;
};

class Diamond :public Shape {
public:
	Diamond();
	Diamond(int xpos_, int ypos_, std::string brush_, int d_);
	void Fill(int canvas_width, int canvas_height);
private:
	int d;
};

#endif
