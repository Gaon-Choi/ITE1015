#include "my_vector.h"

MyVector::MyVector()
	:length(0), a(nullptr) {
	// Do Nothing
}

MyVector::MyVector(int length)
	: length(length) {
	a = new double[length];
}

MyVector::~MyVector() {
	if (!a) {
		delete[] a;
	}
}

MyVector& MyVector::operator=(const MyVector& b) {
	length = b.length;
	a = new double[b.length];

	for (size_t i = 0; i < length; i++)
		a[i] = b.a[i];

	return *this;
}

MyVector MyVector::operator+(const MyVector& b) {
	MyVector vec(length);
	for (int i = 0; i < length; ++i)
		vec.a[i] = a[i] + b.a[i];
	return vec;
}

MyVector MyVector::operator-(const MyVector& b) {
	MyVector vec(length);
	for (int i = 0; i < length; ++i)
		vec.a[i] = a[i] - b.a[i];
	return vec;
}

MyVector MyVector::operator+(const int b) {
	MyVector vec(length);
	for (int i = 0; i < length; ++i)
		vec.a[i] = a[i] + b;
	return vec;
}

MyVector MyVector::operator-(const int b) {
	MyVector vec(length);
	for (int i = 0; i < length; ++i)
		vec.a[i] = a[i] - b;
	return vec;
}
std::ostream& operator<< (std::ostream& out, MyVector& b) {
	for (size_t i = 0; i < b.length; ++i)
		out << b.a[i] << " ";
	return out;
}

std::istream& operator>> (std::istream& in, MyVector& b) {
	for (size_t i = 0; i < b.length; ++i)
		in >> b.a[i];
	return in;
}
