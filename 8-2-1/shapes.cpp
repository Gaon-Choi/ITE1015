#include "shapes.h"

Shape::Shape()
	:xpos(0), ypos(0), brush(" "), canvas(NULL), area(0.0), perimeter(0) {}

Shape::Shape(int xpos_, int ypos_, std::string brush_)
	: xpos(xpos_), ypos(ypos_), brush(brush_), canvas(NULL), area(0.0), perimeter(0) {}

void Shape::Draw(int canvas_width, int canvas_height) {
	std::cout << " ";
	for (int i = 0; i < canvas_width; i++)
		std::cout << i;
	std::cout << std::endl;
	for (int j = 0; j < canvas_height; j++) {
		std::cout << j;
		for (int i = 0; i < canvas_width; i++) {
			if (canvas[j][i] == 0)
				std::cout << ".";
			else if (canvas[j][i] == 1)
				std::cout << brush;
		}
		std::cout << std::endl;
	}
}

void Shape::MakeCanvas(int canvas_width, int canvas_height) {
	canvas = new int* [canvas_height]();
	for (int i = 0; i < canvas_height; i++) {
		canvas[i] = new int[canvas_width]();
	}
	for (int i = 0; i < canvas_height; i++) {
		memset(canvas[i], 0, sizeof(int) * canvas_width);
	}
}

double Shape::GetArea() {
	return area;
}

int Shape::GetPerimeter() {
	return perimeter;
}

Square::Square()
	:Shape(), len(0) {}

Square::Square(int xpos_, int ypos_, std::string brush_, int len_)
	: Shape(xpos_, ypos_, brush_), len(len_) {
	area = (double)len_ * len_;
	perimeter = 4 * len_;
}

void Square::Fill(int canvas_width, int canvas_height) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			if ((xpos + j < canvas_width) && (ypos + i < canvas_height))
				canvas[ypos + i][xpos + j] = 1;
		}
	}
}

Rectangle::Rectangle()
	:Shape(), width(0), height(0) {}

Rectangle::Rectangle(int xpos_, int ypos_, int width_, int height_, std::string brush_)
	: Shape(xpos_, ypos_, brush_), width(width_), height(height_) {
	area = (double)width_ * height_;
	perimeter = 2 * (width_ + height_);
}

void Rectangle::Fill(int canvas_width, int canvas_height) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if ((xpos + j < canvas_width) && (ypos + i < canvas_height))
				canvas[ypos + i][xpos + j] = 1;
		}
	}
}

Diamond::Diamond()
	:Shape(), d(0) {}

Diamond::Diamond(int xpos_, int ypos_, std::string brush_, int d_)
	: Shape(xpos_, ypos_, brush_), d(d_) {
	area = (double)((2 * d_ + 1) * (2 * d_ + 1)) / 2;
	perimeter = 8 * d_;
}

void Diamond::Fill(int canvas_width, int canvas_height) {
	int i, j;
	for (i = 0; i <= d; i++) {
		for (j = -i; j <= i; j++) {
			if ((xpos + j >= 0)&&(ypos + i >= 0)&&(xpos + j < canvas_width) && (ypos + i < canvas_height))
				canvas[ypos + i][xpos + j] = 1;
		}
	}
	int m = d;
	for (i = d + 1; i <= 2 * d; i++) {
		for (j = -(m - 1); j <= m - 1; j++) {
			if (((xpos + j) >= 0) && (xpos + j < canvas_width) && (ypos + i < canvas_height)&&(ypos + i >= 0))
				canvas[ypos + i][xpos + j] = 1;
		}
		m -= 1;
	}
}
