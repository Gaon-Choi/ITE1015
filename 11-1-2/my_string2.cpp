#include "my_string2.h"

MyString2::MyString2() {
	// Do Nothing
}

MyString2::MyString2(std::string s)
	:str(s) {
	// Do Nothing
}

MyString2::MyString2(const MyString2& ms) {
	str = ms.str;
}

MyString2 MyString2::operator+(const MyString2& b) {
	MyString2 s;
	s.str = str + b.str;
	return s;
}

MyString2 MyString2::operator*(const int b) {
	MyString2 s;
	for (int i = 0; i < b; i++)
		s.str += str;
	return s;
}

std::ostream& operator<<(std::ostream& out, MyString2& my_string) {
	out << my_string.str;
	return out;
}

std::istream& operator>>(std::istream& in, MyString2& my_string) {
	std::string s;
	in >> s;
	my_string.str = s;
	return in;
}
