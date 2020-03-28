#include "my_string2.h"

int noexcept_stoi(std::string const& str) {
	int n = -1;
	try {
		n = std::stoi(str);
	}
	catch (std::invalid_argument&) {
		// Do Nothing.
	}
	return n;
}

MyString2& select(std::string const given, MyString2& a, MyString2& b) {
	if (given == "a")
		return a;
	else if (given == "b")
		return b;
}

int main(void) {
	std::string start;
	MyString2 a, b;
	while (true) {
		std::cin >> start;
		if (start == "new") {
			std::cout << "enter a" << std::endl;
			std::cin >> a;
			std::cout << "enter b" << std::endl;
			std::cin >> b;
		}
		else if (start == "a" || start == "b") {
			std::string oper;
			std::string operand;
			std::cin >> oper >> operand;
			int check = noexcept_stoi(operand);
			MyString2 object = select(start, a, b);
			if (check != -1 && oper == "*") {
				MyString2 C(object * check);
				std::cout << C << std::endl;
			}
			else if (check == -1 && oper == "+") {
				MyString2 C(object + select(operand, a, b));
				std::cout << C << std::endl;
			}
		}
		else if (start == "quit")
			break;
	}
	return 0;
}
