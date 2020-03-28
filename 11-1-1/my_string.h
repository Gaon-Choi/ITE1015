#ifndef __STRING_H__
#define __STRING_H__

#include <iostream>
#include <sstream>
#include <string>

class MyString {
public:
	MyString& operator=(const MyString& b);
	MyString operator+(const MyString& b);
	MyString operator*(const int b);
	friend std::ostream& operator<<(std::ostream& out, MyString& my_string);
	friend std::istream& operator>>(std::istream& in, MyString& my_string);
private:
	std::string str;
};

#endif
