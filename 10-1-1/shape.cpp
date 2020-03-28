#include "shape.h"

Shape::Shape(int width_, int height_)
	:width(width_), height(height_) {
	// Do Nothing.
}

Triangle::Triangle(int width_, int height_)
	:Shape(width_, height_) {
	// Do Nothing.
}

double Triangle::getArea() {
	return 0.5 * width * height;
}

Rectangle::Rectangle(int width_, int height_)
	:Shape(width_, height_) {
	// Do Nothing.
}

double Rectangle::getArea() {
	return 1.0 * width * height;
}
