#include "intset.h"

int main(void) {
	IntegerSet intset;
	std::string sel;

	auto show = [&] {
		for (int i : intset.GetAll())
			std::cout << i << " ";
		std::cout << std::endl;
	};

	while (true) {
		std::cin >> sel;
		if (sel == "add") {
			int n;
			std::cin >> n;
			intset.AddNumber(n);
			show();
		}
		else if (sel == "del") {
			int n;
			std::cin >> n;
			intset.DeleteNumber(n);
			show();
		}
		else if (sel == "get") {
			int pos;
			std::cin >> pos;
			std::cout << intset.GetItem(pos) << std::endl;
		}
		else
			break;
	}
}
