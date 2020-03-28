#include "canvas.h"

Canvas::Canvas(const size_t row, const size_t col)
	:canvas_width(col), canvas_height(row) {
	canvas = new char* [row]();
	for (int i = 0; i < canvas_height; i++) {
		canvas[i] = new char[canvas_width]();
	}
	Clear();
}

void Canvas::Resize(const size_t row, const size_t col) {
	for (int i = 0; i < canvas_height; i++)
		delete canvas[i];
	delete[] canvas;
	canvas_width = row;
	canvas_height = col;
	canvas = new char* [col]();
	for (int i = 0; i < canvas_height; i++) {
		canvas[i] = new char[canvas_width]();
	}
	Clear();
}

bool Canvas::DrawPixel(const int x, const int y, const char brush) {
	if (x >= 0 && y >= 0 && x < canvas_width && y < canvas_height) {
		canvas[y][x] = brush;
		return true;
	}
	else
		return false;
}
void Canvas::Print() const {
	int i, j;
	std::cout << " ";
	for (i = 0; i < canvas_width; i++)
		std::cout << i%10;
	std::cout << std::endl;
	for (j = 0; j < canvas_height; j++) {
		std::cout << j%10;
		for (i = 0; i < canvas_width; i++) {
			std::cout << canvas[j][i];
		}
		std::cout << std::endl;
	}
}

void Canvas::Clear() {
	int i, j;
	for (int i = 0; i < canvas_height; i++)
		for (int j = 0; j < canvas_width; j++)
			canvas[i][j] = '.';
}

Shape::Shape(int xpos_, int ypos_, char brush_)
	:xpos(xpos_), ypos(ypos_), brush(brush_) {}

Rectangle::Rectangle(int xpos_, int ypos_, int height_, int width_, char brush_)
	:Shape(xpos_, ypos_, brush_), height(height_), width(width_) {}

void Rectangle::Draw(Canvas* canvas) const {
	int i, j;
	for (i = ypos; i < ypos + width; i++)
		for (j = xpos; j < xpos + height; j++)
			canvas->DrawPixel(j, i, brush);
}

void Rectangle::printInfo() const {
	std::cout << "rect" << " " << xpos << " " << ypos << " " << height << " " << width << " " << brush << std::endl;
}

UpTriangle::UpTriangle(int xpos_, int ypos_, int d_, char brush_)
	:Shape(xpos_, ypos_, brush_), d(d_) {
	// Do Nothing.
}

void UpTriangle::Draw(Canvas* canvas) const {
	int i, j;
	for (i = 0; i < d; i++)
		for (j = -i; j <= i; j++)
			canvas->DrawPixel(j + xpos, i + ypos, brush);
}

void UpTriangle::printInfo() const {
	std::cout << "tri_up" << " " << xpos << " " << ypos << " " << d << " " << brush << std::endl;
}

DownTriangle::DownTriangle(int xpos_, int ypos_, int d_, char brush_)
	:Shape(xpos_, ypos_, brush_), d(d_) {
	// Do Nothing.
}

void DownTriangle::Draw(Canvas* canvas) const {
	int i, j;
	for (i = 0; i > -d; i--)
		for (j = i; j <= -i; j++)
			canvas->DrawPixel(j + xpos, i + ypos, brush);
}

void DownTriangle::printInfo() const {
	std::cout << "tri_down" << " " << xpos << " " << ypos << " " << d << " " << brush << std::endl;
}

Diamond::Diamond(int xpos_, int ypos_, int d_, char brush_)
	:Shape(xpos_, ypos_, brush_), d(d_) {
	// Do Nothing.
}

void Diamond::Draw(Canvas* canvas) const {
	int i, j;
	for (i = 0; i <= d; i++)
		for (j = -i; j <= i; j++)
			canvas->DrawPixel(j + xpos, i + ypos, brush);
	int m = d;
	for (i = d + 1; i <= 2 * d; i++) {
		for (j = -(m - 1); j <= m - 1; j++)
			canvas->DrawPixel(j + xpos, i + ypos, brush);
		m -= 1;
	}
}

void Diamond::printInfo() const {
	std::cout << "diamond" << " " << xpos << " " << ypos << " " << d << " " << brush << std::endl;
}
