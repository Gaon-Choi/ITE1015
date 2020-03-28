#ifndef __CLASSES_H__
#define __CLASSES_H__

#include <iostream>
#include <vector>
using namespace std;

class A {
	public:
		virtual void test();
};

class B :public A {
	public:
		virtual void test();
};

class C :public B {
	public:
		virtual void test();
};

#endif
