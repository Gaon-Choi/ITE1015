#include "my_vector2.h"

MyVector2& select(std::string s, MyVector2& a, MyVector2& b) {
	if (s == "a")
		return a;
	else if (s == "b")
		return b;
}
int noexcept_stoi(std::string const& str, bool* flag) {
	int num = -1;
	try {
		num = std::stoi(str);
		*flag = true;
	}
	catch(std::invalid_argument&){
		*flag = false;
	}
	return num;
}
MyVector2 do_operate_1(MyVector2& a, char oper, int num) {
	if (oper == '+'){
		return a+num;
	}
	else if (oper == '-'){
		return a - num;
	}
}
MyVector2 do_operate_2(MyVector2& a, char oper, MyVector2& b) {
	if (oper == '+'){
		return a+b;
	}
	else if (oper == '-'){
		return a-b;
	}
}

#define SAFE_DELETE(p) \
	if (p) { \
		delete p; \
		p = nullptr; \
	}

int main(void) {
	std::string start;
	MyVector2 *a = nullptr, *b = nullptr;
	while (true) {
		std::cin >> start;
		if (start == "new") {
			int size;
			std::cin >> size;
			MyVector2 A(size);
			MyVector2 B(size);
			std::cout << "enter a" << std::endl;
			std::cin >> A;
			std::cout << "enter b" << std::endl;
			std::cin >> B;

			SAFE_DELETE(a);
			SAFE_DELETE(b);

			a = new MyVector2(A);
			b = new MyVector2(B);
			continue;
		}
		else if (start == "quit")
			break;
		char oper;
		std::string operand;
		std::cin >> oper >> operand;
		if (start == "a" || start == "b") {
			MyVector2 vec1 = select(start, *a, *b);
			bool success_flag;
			int num = noexcept_stoi(operand, &success_flag);
			if (success_flag) {
				MyVector2 C(do_operate_1(vec1, oper, num));
				std::cout << C << std::endl;
			}
			else {
				MyVector2 C(do_operate_2(vec1, oper, select(operand, *a, *b)));
				std::cout << C << std::endl;
			}
		}
	}

	SAFE_DELETE(a);
	SAFE_DELETE(b);

	return 0;
}
