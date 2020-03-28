#include "my_string.h"

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
MyString& select(std::string const given, MyString& a, MyString& b) {
	if (given == "a")
		return a;
	else if (given == "b")
		return b;
}

int main(void) {
	std::string start;
	MyString a, b;
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
			MyString object = select(start, a, b);
			if (check != -1 && oper == "*") {
				MyString C;
				C = object * check;
				std::cout << C << std::endl;
			}
			else if (check == -1 && oper == "+") {
				MyString C;
				C = object + select(operand, a, b);
				std::cout << C << std::endl;
			}
		}
		else if (start == "quit")
			break;
	}
	return 0;
}
