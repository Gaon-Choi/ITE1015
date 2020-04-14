#include "canvas.h"

int main(void) {
	int width, height;
	std::cin >> height >> width;
	Canvas sketch(height, width);
	sketch.Print();
	std::vector<Shape*> shapes;

	std::string mode;
	while (true) {
		std::cin >> mode;
		if (mode == "add") {
			std::string shape;
			std::cin >> shape;
			if (shape == "rect") {
				int xpos, ypos, height, width;
				char brush;
				std::cin >> xpos >> ypos >> height >> width >> brush;
				shapes.emplace_back(new Rectangle(xpos, ypos, height, width, brush));
			}
			else if (shape == "tri_up") {
				int xpos, ypos, d;
				char brush;
				std::cin >> xpos >> ypos >> d >> brush;
				shapes.emplace_back(new UpTriangle(xpos, ypos, d, brush));
			}
			else if (shape == "tri_down") {
				int xpos, ypos, d;
				char brush;
				std::cin >> xpos >> ypos >> d >> brush;
				shapes.emplace_back(new DownTriangle(xpos, ypos, d, brush));
			}
			else if (shape == "diamond") {
				int xpos, ypos, d;
				char brush;
				std::cin >> xpos >> ypos >> d >> brush;
				shapes.emplace_back(new Diamond(xpos, ypos, d, brush));
			}
		}
		else if (mode == "draw") {
			std::vector<Shape*>::iterator iter = shapes.begin();
			for (iter = shapes.begin(); iter != shapes.end(); iter++)
				(*iter)->Draw(&sketch);
			sketch.Print();
		}
		else if (mode == "dump") {
			if (shapes.size() == 0)
				std::cout << std::endl;
			else {
				for (size_t i = 0; i < shapes.size(); ++i) {
					std::cout << i << ' ';
					shapes[i]->printInfo();
				}
			}
		}
		else if (mode == "delete") {
			int pos;
			std::cin >> pos;
			if (pos < shapes.size()) {
				auto iter = shapes.begin() + pos;
				delete* iter;
				shapes.erase(iter);
			}
		}
		else if (mode == "resize") {
			int row, col;
			std::cin >> row >> col;
			sketch.Resize(row, col);
		}
		else if (mode == "quit")
			break;
	}

	return 0;
}