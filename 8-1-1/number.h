#ifndef __NUMBER_H__
#define __NUMBER_H__
#include <iostream>
#include <cstring>
using namespace std;

class Number {
	protected:
		int _num;
	public:
		void setNumber(int num);
		int getNumber();
};

class Square :public Number {
	public:
		int getSquare();
};

class Cube :public Square {
	public:
		int getCube();
};
#endif
