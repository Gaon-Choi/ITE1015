#include <iostream>
#include <string>
#include "shapes.h"

int main(void) {
	std::string sel;
	while(1) {
		std::cout << "shape?\n";
		std::cin >> sel;
		if (sel == "C") {
			int xpos, ypos, r;
			std::cin >> xpos >> ypos >> r;
			Circle c(xpos, ypos, r);
			c.GetInfo();
		}
		else if (sel == "R") {
			int x1, y1, x2, y2;
			std::cin >> x1 >> y1 >> x2 >> y2;
			Rectangle r(x1, y1, x2, y2);
			r.GetInfo();
		}
		else if (sel == "Q")
			break;
	
	}
	return 0;
}
