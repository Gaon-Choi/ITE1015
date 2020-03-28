#include "class.h"

int main(void) {
	std::string sel;
	std::vector<B*> arr;
	while (true) {
		std::cin >> sel;
		if (sel == "B")
			arr.emplace_back(new B);
		else if (sel == "C")
			arr.emplace_back(new C);
		else if (sel == "D")
			arr.emplace_back(new D);
		else if (sel == "0")
			break;
	}
	for (auto elem : arr) {
		C* c = dynamic_cast<C*>(elem);
		if (c != nullptr) {
			c->test_C();
			continue;
		}

		D* d = dynamic_cast<D*>(elem);
		if (d != nullptr) {
			d->test_D();
		}
	}
	for (auto elem : arr) {
		delete elem;
	}
	return 0;
}
