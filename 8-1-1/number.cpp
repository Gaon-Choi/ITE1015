#include "number.h"

void Number::setNumber(int num) {
	_num = num;
}
int Number::getNumber() {
	return _num;
}

int Square::getSquare() {
	return getNumber() * getNumber();
}

int Cube::getCube() {
	return getNumber() * getNumber() * getNumber();
}
