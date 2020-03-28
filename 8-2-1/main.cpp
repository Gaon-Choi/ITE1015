#include "shapes.h"

int main(void) {
	int x, y;	// 스크린의 사이즈
	std::cin >> x >> y;

	int xpos, ypos;	// 도형의 시작 좌표
	std::string sel, style;
	while (true) {
		std::cin >> sel;
		if (sel == "rect") {
			int width, height;
			std::cin >> xpos >> ypos >> width >> height >> style;
			Rectangle rt(xpos, ypos, width, height, style);
			rt.MakeCanvas(x, y);
			rt.Fill(x, y);
			std::cout << "Area: " << rt.GetArea() << std::endl;
			std::cout << "Perimeter: " << rt.GetPerimeter() << std::endl;
			rt.Draw(x, y);
		}

		else if (sel == "square") {
			int len;
			std::cin >> xpos >> ypos >> len >> style;
			Square sq(xpos, ypos, style, len);
			sq.MakeCanvas(x, y);
			sq.Fill(x, y);
			std::cout << "Area: " << sq.GetArea() << std::endl;
			std::cout << "Perimeter: " << sq.GetPerimeter() << std::endl;
			sq.Draw(x, y);
		}

		else if (sel == "diamond") {
			int d;
			std::cin >> xpos >> ypos >> d >> style;
			Diamond dm(xpos, ypos, style, d);
			dm.MakeCanvas(x, y);
			dm.Fill(x, y);
			std::cout << "Area: " << dm.GetArea() << std::endl;
			std::cout << "Perimeter: " << dm.GetPerimeter() << std::endl;
			dm.Draw(x, y);
		}
		else if (sel == "quit")
			break;
		std::cout << std::endl;
	}

	return 0;
}
