#include "my_string.h"

MyString& MyString::operator=(const MyString& b) {
	str = b.str;
	return *this;
}

MyString MyString::operator+(const MyString& b) {
	MyString s;
	s.str = str + b.str;
	return s;
}

MyString MyString::operator*(const int b) {
	MyString s;
	for (int i = 0; i < b; ++i)
		s.str += str;
	return s;
}

std::ostream& operator<<(std::ostream& out, MyString& my_string) {
	out << my_string.str;
	return out;
}

std::istream& operator>>(std::istream& in, MyString& my_string) {
	in >> my_string.str;
	return in;
}
