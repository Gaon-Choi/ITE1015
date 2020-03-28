#include "rect.h"

Rectangle::Rectangle (int width_, int height_)
	:width(width_), height(height_) {}

int Rectangle::getArea() {
	return width * height;
}

int Rectangle::getPerimeter() {
	return 2 * (width + height);
}

Square::Square(int width_)
	:Rectangle(width_, width_) {}

void Square::print() {
	cout << width << "x" << height << " Square" << endl;
	cout << "Area: " << getArea() << endl;
	cout << "Perimeter: " << getPerimeter() << endl;
}

NonSquare::NonSquare(int width_, int height_)
	: Rectangle(width_, height_) {}

void NonSquare::print() {
	cout << width << "x" << height << " NonSquare" << endl;
	cout << "Area: " << getArea() << endl;
	cout << "Perimeter: " << getPerimeter() << endl;
}
