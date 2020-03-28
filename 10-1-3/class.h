#ifndef __CLASS_H__
#define __CLASS_H__

#include <iostream>
#include <vector>
#include <string>

class B {
public:
	virtual ~B() {}
};

class C :public B {
public:
	void test_C();
};

class D :public B {
public:
	void test_D();
};

#endif
