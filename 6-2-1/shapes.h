#pragma once
#define PI 3.14;
class Circle {
	private:
		int xpos;
		int ypos;
		int radius;
	public:
		Circle(int x, int y, int r);
		void GetInfo();
};

class Rectangle {
	private:
		int x_1;
		int y_1;
		int x_2;
		int y_2;
	public:
		Rectangle(int x1, int y1, int x2, int y2);
		void GetInfo();
};
