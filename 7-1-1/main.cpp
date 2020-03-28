#include <sstream>
#include "sorted.h"

int main(void) {
	SortedArray arr;
	std::string sel;
	while (true) {
		std::cin >> sel;
		if (sel == "ascend") {
			for (int i : arr.GetSortedAscending())
				std::cout << i << " ";
			std::cout << std::endl;
		}
		else if (sel == "descend") {
			for (int i : arr.GetSortedDescending())
				std::cout << i << " ";
			std::cout << std::endl;
		}
		else if (sel == "max") {
			std::cout << arr.GetMax() << std::endl;
		}
		else if (sel == "min") {
			std::cout << arr.GetMin() << std::endl;
		}
		else if (sel == "quit") {
			break;
		}
		else {
			std::stringstream ss(sel);
			int n = 0;
			ss >> n;
			arr.AddNumber(n);
		}
	}
	return 0;
}
