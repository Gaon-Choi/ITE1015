#ifndef __PRINT_INFO_H__
#define __PRINT_INFO_H__

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class A {
	public:
		virtual string getTypeInfo();
};

class B :public A {
	public:
		virtual string getTypeInfo();
};

class C :public B {
	public:
		virtual string getTypeInfo();
};

#endif
