#include <iostream>
#include "shapes.h"

Circle::Circle(int x, int y, int r)
	:xpos(x), ypos(y), radius(r) {}

void Circle::GetInfo() {
	std::cout << "area: " << 3.14 * radius * radius << ", " << "perimeter: " << 2 * 3.14 * radius << std::endl << std::endl;
}

Rectangle::Rectangle(int x1, int y1, int x2, int y2)
	:x_1(x1), y_1(y1), x_2(x2), y_2(y2) {}

void Rectangle::GetInfo() {
	int height = y_1 - y_2;
	int width = x_2 - x_1;
	std::cout << "area: " << height * width << ", " << "perimeter: " << 2 * (height + width) << std::endl << std::endl;
}
