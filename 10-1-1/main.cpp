#include "shape.h"

int main(void) {
	std::string s;
	std::vector<Shape*> arr;
	while (true) {
		std::cin >> s;
		if (s == "r" || s == "t") {
			int w, h;
			std::cin >> w >> h;
			if (s == "r")
				arr.emplace_back(new Rectangle(w, h));
			else
				arr.emplace_back(new Triangle(w, h));
		}
		else if (s == "0")
			break;
	}

	for (auto elem : arr) {
		std::cout << elem->getArea();
		std::cout << std::endl;
	}

	for (auto elem : arr)
		delete elem;
	return 0;
}
