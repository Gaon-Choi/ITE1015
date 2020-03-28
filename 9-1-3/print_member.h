#ifndef __PRINT_MEMBER_H__
#define __PRINT_MEMBER_H__

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class A {
private:
	int* memberA;
public:
	A(int a);
	virtual void print() const;
	virtual ~A();
};

class B :public A {
private:
	double* memberB;
public:
	B(double b);
	virtual void print() const;
	virtual ~B();
};

class C :public B {
private:
	string* memberC;
public:
	C(string c);
	virtual void print() const;
	virtual ~C();
};

#endif
