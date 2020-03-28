#include "my_vector.h"

MyVector& select(std::string s, MyVector& a, MyVector& b) {
	if (s == "a")
		return a;
	else if (s == "b")
		return b;
}

int noexcept_stoi(std::string const& str, bool& flag) {
	int num = -1;
	try {
		num = std::stoi(str);
		flag = true;
	}
	catch(std::invalid_argument&){
		flag = false;
	}
	return num;
}

MyVector do_operate_1(MyVector a, char oper, int num) {
	MyVector C;
	if (oper == '+')
		C = a + num;
	else if (oper == '-')
		C = a - num;
	return C;
}

MyVector do_operate_2(MyVector a, char oper, MyVector b) {
	MyVector C;
	if (oper == '+')
		C = a + b;
	else if (oper == '-')
		C = a - b;
	return C;
}

int main(void) {
	std::string start;
	MyVector a, b;
	while (true) {
		std::cin >> start;
		if (start == "new") {
			int size;
			std::cin >> size;
			a = MyVector(size);
			b = MyVector(size);

			std::cout << "enter a" << std::endl;
			std::cin >> a;

			std::cout << "enter b" << std::endl;
			std::cin >> b;

			continue;
		}
		else if (start == "quit")
			break;

		char oper;
		std::string operand;
		std::cin >> oper >> operand;

		if (start == "a" || start == "b") {
			MyVector& vec1 = select(start, a, b);

			bool success_flag;
			int num = noexcept_stoi(operand, success_flag);
			MyVector C;
			if (success_flag) {
				C = do_operate_1(vec1, oper, num);
				std::cout << C << std::endl;
			}
			else {
				C = do_operate_2(vec1, oper, select(operand, a, b));
				std::cout << C << std::endl;
			}
		}
	}
	return 0;
}
