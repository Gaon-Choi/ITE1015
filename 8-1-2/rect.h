#ifndef __RECT_H__
#define __RECT_H__

#include <iostream>
using namespace std;

class Rectangle {
	public:
		Rectangle (int width_, int height_);
		int getArea();
		int getPerimeter();
	protected:
		int width;
		int height;
};

class Square :public Rectangle {
	public:
		Square (int width_);
		void print();
};

class NonSquare :public Rectangle {
	public:
		NonSquare (int width_, int height_);
		void print();
};

#endif
